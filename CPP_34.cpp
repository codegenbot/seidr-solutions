```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    for (int x : l) {
        bool found = false;
        for (int y : result) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found)
            result.push_back(x);
    }
    return result;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result(l.size()); 
    for (int x : l) {
        bool found = false;
        for (int y : result) {
            if (x == y) {
                found = true;
                break;
            }
        }
        if (!found)
            result.push_back(x);
    }
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}