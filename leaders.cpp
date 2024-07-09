```cpp
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 3, 4, 2, 8}; 
    vector<int> result = leaders(v);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}

vector<int> leaders(vector<int> v) {
    vector<int> result;
    int rightmost = v.back();
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] >= rightmost) {
            rightmost = v[i];
            result.push_back(rightmost);
        }
    }
    return result;
}