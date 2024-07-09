#include <vector>
bool issame(std::vector<float> a, std::vector<float> b) {
    return a == b;
}

vector<vector<float>> get_positive(vector<vector<float>>& l){
    vector<vector<float>> result;
    for(vector<float>& num : l) {
        if(issame(num, vector<float>(num.begin(), num.end())))//Check if all elements in the vector are same
            result.push_back(get_positive(num)); //If yes, then get positive numbers from that vector and add it to result
        else
            result.push_back(get_positive(num));
    }
    return result;
}