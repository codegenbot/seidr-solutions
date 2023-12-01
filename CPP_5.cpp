#include <vector>

vector<int> intersperse(vector<int> numbers, int delimeter){
    vector<int> result;
    if(numbers.empty()){
        return result;
    }
    result.push_back(numbers[0]);
    for(int i=1; i<numbers.size(); i++){
        result.push_back(delimeter);
        result.push_back(numbers[i]);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    // implementation of issame function here...
}

int main(){
    assert (issame(intersperse({2, 2, 2}, 2),{2, 2, 2, 2, 2}));
    // more test cases...
    return 0;
}