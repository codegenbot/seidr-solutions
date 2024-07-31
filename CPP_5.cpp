#include <vector>
#include <cassert>

vector<int> intersperse(vector<int> numbers, int delimeter);

bool issame(const vector<int>& a, const vector<int>& b){
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