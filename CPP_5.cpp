#include <vector>
#include <cassert>

vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    for(int i=0; i<numbers.size()-1; i++){
        result.push_back(numbers[i]);
        result.push_back(delimiter);
    }
    if(numbers.size() > 0){
        result.push_back(numbers[numbers.size()-1]);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(intersperse({2, 2, 2}, 2) == vector<int>{2, 2, 2, 2, 2});
    return 0;
}