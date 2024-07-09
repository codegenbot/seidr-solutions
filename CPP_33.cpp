```cpp
#include <iostream>
#include <vector>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    int groupCount = 0;

    for (int i : l) {
        if(groupCount % 3 == 0 || groupCount >= l.size()) { 
            result.push_back(i);
            groupCount++;
        } else {
            groupCount++;
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