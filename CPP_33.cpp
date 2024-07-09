```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result = vector<int>();
    result.reserve(l.size());
    int i = 0; 
    while (i < l.size()) {
        if (i + 2 < l.size() - 1) { 
            vector<int> block;
            for (int j = 0; j < 3; j++) {
                block.push_back(l[i + j]);
            }
            sort(block.begin(), block.end());
            for (int k : block) {
                result.push_back(k);
            }
            i += 3;
        } else {
            if (i < l.size() - 1) {
                result.push_back(l[i]);
            }
            i++;
        }
    }
    return result;
}

int main() {
    vector<int> l1 = {1, 2, 3};
    vector<int> l2 = {5, 6, 3, 4, 8, 9, 2};

    cout << "l1: ";
    for (int i : l1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "l2: ";
    for (int i : l2) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> result = sort_third(l1);
    cout << "result: ";
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}