#include <iostream>
#include <vector>

using namespace std;

vector<int> rolling_max(vector<int> numbers);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int n = numbers.size();
    for(int i = 0; i < n; ++i){
        int max_val = numbers[i];
        for(int j = i+1; j < n; ++j){
            if(numbers[j] > max_val){
                max_val = numbers[j];
            }
        }
        result.push_back(max_val);
    }
    return result;
}

int main() {
    // Your main function code here for testing if required
    return 0;
}