```cpp
#include <vector>
#include <utility>

using namespace std;

bool issame(int a, int b) {
    return (a >= b);
}

pair<int, int> pluck(const vector<int>& v, int i) {
    if(i >= v.size()) 
        return make_pair(-1, -1);
    else
        return make_pair(v[i], i);
}

vector<pair<int, int>> result(vector<int> arr) {
    vector<pair<int, int>> res;
    for(int i = 0; i < arr.size(); i++) {
        if(issame(arr[i], i+1)) 
            res.push_back(pluck(arr, i));
    }
    return res;
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    vector<pair<int, int>> output = result(arr);
    for (auto p : output) {
        cout << "Number: " << p.first << ", Index: " << p.second << endl;
    }
    return 0;
}