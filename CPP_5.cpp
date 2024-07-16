#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> intersperse(vector<int> numbers, int delimeter);

vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        result.push_back(numbers[i]);
        if(i < numbers.size()-1){
            result.push_back(delimeter);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}