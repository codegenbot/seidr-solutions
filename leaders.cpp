```cpp
#include <vector>
using namespace std;

vector<int> leaders(vector<int>& arr) {
    int n = arr.size();
    vector<int> leaders;
    int rightmost_max = arr.back();
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] >= rightmost_max) {
            rightmost_max = arr[i];
            leaders.push_back(rightmost_max);
        }
    }
    reverse(leaders.begin(), leaders.end());
    return leaders;
}

int main() { return 0; }