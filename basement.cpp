```cpp
#include <vector>
using namespace std;

int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> v = {-2, 3, 10, -4, -10};
    int result = basement(v);
    cout << "The first index such that the sum of all integers from the start of the vector to that index (inclusive) is negative: " << result << endl;
    return 0;
}