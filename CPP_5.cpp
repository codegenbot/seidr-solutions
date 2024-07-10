#include <vector>

vector<int> intersperse(vector<int> numbers, int delimeter);

bool issame(vector<int> a, vector<int> b);

vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        if(i > 0){
            result.push_back(delimeter);
        }
        result.push_back(numbers[i]);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    // Function implementation
}