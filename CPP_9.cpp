#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> rolling_max(vector<int> numbers);
bool issame(vector<int> a, vector<int> b);

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int maxNum = numbers[0];
    for(int i=0; i<numbers.size(); i++){
        maxNum = max(maxNum, numbers[i]);
        result.push_back(maxNum);
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    
    cout << "Test passed!" << endl;
    
    return 0;
}