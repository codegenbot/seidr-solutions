```cpp
#include <vector>
#include <initializer_list>
using namespace std;

int main() {
    vector<int> v = {1, 3, 4, 2, 8};
    vector<int> res = leaders(v);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}

vector<int> leaders(vector<int>& v) {
    vector<int> res;
    int rightmost = v.back();
    res.push_back(rightmost);
    for (int i = v.size() - 2; i >= 0; --i) {
        if (v[i] > rightmost) {
            rightmost = v[i];
            res.push_back(rightmost);
        }
    }
    return res;
}