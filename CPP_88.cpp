#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

vector<int> sort_array(vector<int> array){
    int sum = array[0] + array[array.size()-1];
    if(sum % 2 == 0)
        return array;
    else
        reverse(array.begin(), array.end());
    return array;
}