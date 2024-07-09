#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int max(int a, int b){
    return (a > b) ? a : b;
}

vector<int> rolling_max(vector<int> numbers);

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_num = numbers[0];
    result.push_back(max_num);
    
    for(int i = 1; i < numbers.size(); i++){
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    
    return result;
}

int main() {
    // Your code here
    return 0;
}