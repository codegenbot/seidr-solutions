#include <vector>

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(auto num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

bool issame(vector<float> a, vector<float> b){
    // Function to compare two vectors for equality
}

int main(){
    assert (issame(get_positive({}), {}));
    // Add more test cases here
    return 0;
}