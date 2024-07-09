```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    int i = 0;
    while (i < l.size()) {
        if (i + 2 < l.size()) {
            vector<int> block(3);
            for (int j = 0; j < 3; j++) {
                block[j] = l[i + j];
            }
            sort(block.begin(), block.end());
            result.insert(result.end(), block.begin(), block.end());
            i += 3;
        } else {
            if (i < l.size()) {
                result.push_back(l[i]);
            }
            i++;
        }
    }
    return result;
}

int main() {
    vector<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(3);

    vector<int> l2;
    l2.push_back(5);
    l2.push_back(6);
    l2.push_back(3);
    l2.push_back(4);
    l2.push_back(8);
    l2.push_back(9);
    l2.push_back(2);

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

    vector<int> result1 = sort_third(l1);
    vector<int> result2 = sort_third(l2);

    cout << "result1: ";
    for (int i : result1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "result2: ";
    for (int i : result2) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}