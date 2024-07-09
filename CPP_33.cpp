```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    result.reserve(l.size());
    int i = 0;
    for (i = 0; i < l.size(); ) {
        if (i % 3 == 0 && i < l.size() - 2) {
            vector<int> temp;
            for (int j = i; j < min(i + 3, l.size()); j++) {
                temp.push_back(l[j]);
            }
            sort(temp.begin(), temp.end());
            int k = 0;
            for (int t : temp) {
                result.push_back(t); 
                i++;
            }
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