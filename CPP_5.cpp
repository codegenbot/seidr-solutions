#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> intersperse(vector<int> numbers, int delimiter){
    vector<int> result;
    for(int i = 0; i < numbers.size(); i++){
        result.push_back(numbers[i]);
        if(i != numbers.size() - 1){
            result.push_back(delimiter);
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    if (a.size() != b.size()){
        return false;
    }
    for (int i = 0; i < a.size(); i++){
        if (a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    // Your main code goes here
    return 0;
}