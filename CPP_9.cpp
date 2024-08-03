#include <vector>
#include <iostream>
#include <climits>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b);
vector<int> rolling_max(vector<int> numbers);

int main() {
    vector<int> numbers = {1, 3, 5, 2, 8};
    vector<int> result = rolling_max(numbers);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> rolling_max(vector<int> numbers){
    vector<int> result;
    int max_num = INT_MIN;
    for (int i = 0; i < numbers.size(); i++) {
        max_num = max(max_num, numbers[i]);
        result.push_back(max_num);
    }
    return result;
}