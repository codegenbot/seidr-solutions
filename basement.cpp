```cpp
#include <vector>
using namespace std;

int basement(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += v[j];
            if (sum < 0)
                return i;
        }
    }
    return -1;
}

int main() {
    vector<int> v = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int result = basement(v);
    cout << "Basement is at index: " << result << endl;
    return 0;
}