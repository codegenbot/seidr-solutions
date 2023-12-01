#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    // implementation of issame function
    return a == b;
}

vector<int> rolling_max(vector<int> numbers) {
    vector<int> rollingMax;
    int maxSoFar = numbers[0];
    rollingMax.push_back(maxSoFar);

    for(int i = 1; i < numbers.size(); i++){
        if(numbers[i] > maxSoFar){
            maxSoFar = numbers[i];
        }
        rollingMax.push_back(maxSoFar);
    }

    return rollingMax;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));

    cout << "Test cases passed!" << endl;

    return 0;
}