#include <iostream>
#include <vector>

using namespace std;

vector<int> even_odd_count(int num);

bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    string numString = to_string(abs(num));
    
    for(int i = 0; i < numString.length(); i++){
        int digit = numString[i] - '0';
        if(digit % 2 == 0){
            evenCount++;
        } else {
            oddCount++;
        }
    }

    vector<int> result = {evenCount, oddCount};
    return result;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
    assert(issame(even_odd_count(12345), {2, 3}));
    assert(issame(even_odd_count(-987654), {3, 3}));
    
    cout << "All test cases passed!";
    
    return 0;
}