#include <vector>

vector<int> intersperse(vector<int> numbers, int delimiter){ 
    vector<int> result;
    for(int i=0; i<numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i != numbers.size()-1){
            result.push_back(delimiter);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    // Your implementation here
    return a == b;
}

int main(){
    assert(issame(intersperse({2, 2, 2}, 2), {2, 2, 2, 2, 2}));
    // More test cases here
    return 0;
}