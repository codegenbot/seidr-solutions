#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        result.push_back(numbers[i]);
        if(i < numbers.size() - 1){
            result.push_back(delimiter);
        }
    }
    return result;
}

int main(){
    vector<int> testInput = {1, 2, 3, 4, 5};
    vector<int> expectedResult = {1, 2, 9, 3, 4, 9, 5};
    
    vector<int> result = intersperse(testInput, 9);

    if(issame(result, expectedResult)){
        // Test passed
    } else {
        // Test failed
    }

    return 0;
}