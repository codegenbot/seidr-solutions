```cpp
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return (a[0] == b[0]) && (a[1] == b[1]);
}

vector<int> even_odd_count(int num) {
    vector<int> result(2);
    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            result[0]++;
        else
            result[1]++;
        num /= 10;
    }
    return result;
}