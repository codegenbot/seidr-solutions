#include <iostream>
#include <vector>
using namespace std;

vector<int> even_odd_count(int num){
    int evenCount = 0;
    int oddCount = 0;
    string numStr = to_string(abs(num));

    for (char c : numStr){
        int digit = c - '0';
        if (digit % 2 == 0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }

    return {evenCount, oddCount};
}

int main() {
    assert(even_odd_count(0) == vector<int>({1, 0}));
    assert(even_odd_count(12345) == vector<int>({2, 3}));
    assert(even_odd_count(-987654321) == vector<int>({5, 4}));

    cout << "All tests passed!" << endl;

    return 0;
}