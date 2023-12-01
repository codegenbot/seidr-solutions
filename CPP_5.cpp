#include <vector>

bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> intersperse(vector<int> numbers, int delimiter);

vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    
    if(numbers.empty()){
        return result;
    }
    
    for(int i = 0; i < numbers.size() - 1; i++){
        result.push_back(numbers[i]);
        result.push_back(delimiter);
    }
    
    result.push_back(numbers[numbers.size() - 1]);
    
    return result;
}

int main(){
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    return 0;
}