#include <vector>
#include <cassert>

vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        if(i > 0){
            result.push_back(delimiter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}

vector<int> intersperse(vector<int> numbers, int delimiter){
    // Function implementation
}

bool issame(vector<int> a, vector<int> b){
    // Function implementation
}

int main() {
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    // Other test cases
    return 0;
}