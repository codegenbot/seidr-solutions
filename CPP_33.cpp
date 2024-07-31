```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    int i = 0;
    while (i < l.size()) {
        if (i % 3 == 0) {
            vector<int> temp;
            int j = i;
            while (j < l.size() && j % 3 == 0) {
                temp.push_back(l[j]);
                j++;
            }
            sort(temp.begin(), temp.end());
            for (int k = 0; k < temp.size(); k++) {
                result.push_back(temp[k]);
            }
            i = j;
        } else {
            result.push_back(l[i]);
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
    vector<int> result2 = sort_third(l2);

    cout << "result1: ";
    for (int i : result) {
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