#include <vector>

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

vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); ++i){
        result.push_back(numbers[i]);
        if(i < numbers.size() - 1){
            result.push_back(delimeter);
        }
    }
    return result;
}

int main(){
    vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> interspersed = intersperse(numbers, 0);
    vector<int> expected = {1, 0, 2, 0, 3, 0, 4, 0, 5};
    assert(issame(interspersed, expected));
    
    return 0;
}