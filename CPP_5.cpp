#include <vector>

bool issame(vector<int> a, vector<int> b){
    // Add your implementation for checking if two vectors are the same
}

vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    if(numbers.empty()) {
        return result;
    }
    for(int i = 0; i < numbers.size() - 1; ++i) {
        result.push_back(numbers[i]);
        result.push_back(delimeter);
    }
    result.push_back(numbers[numbers.size() - 1]);
    return result;
}

int main(){
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    // Add more test cases here
    return 0;
}