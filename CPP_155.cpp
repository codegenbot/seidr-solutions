#include <vector>
#include <cassert>
#include <string>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> even_odd_count(int num) {
    int evenCount = 0;
    int oddCount = 0;
    string numString = to_string(abs(num));
    
    for (char digit : numString) {
        int num = digit - '0';
        if (num % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    return {evenCount, oddCount};
}