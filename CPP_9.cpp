#include <iostream>
#include <vector>
using namespace std;

int max(int a, int b){
    return (a > b) ? a : b;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> rolling_max(vector<int> numbers);

int main() {
    // Test the rolling_max function
    vector<int> nums = {1, 3, 5, 2, 8};
    vector<int> result = rolling_max(nums);
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}

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