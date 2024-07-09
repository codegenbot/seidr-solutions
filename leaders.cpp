```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> v = {17, 28, 4, 27, 29, 30, 35, 5, 24, 25, 32};
    vector<int> result = leaders(v);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}

vector<int> leaders(vector<int> v) {
    vector<int> result;
    int rightmost = v.back();
    result.push_back(rightmost);

    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            result.push_back(rightmost);
        }
    }
    reverse(result.begin(), result.end());
    return result;
}