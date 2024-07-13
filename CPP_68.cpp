```cpp
#include <iostream>
#include <vector>
using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    if (arr.empty()) return result;

    int minEven = INT_MAX;
    int index = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }

    if (minEven != INT_MAX) {
        result.push_back(minEven);
        result.push_back(index);
    }

    return result;
}

int main() {
    vector<int> v1 = {2, 4, 6};
    vector<int> v2 = {2, 3, 5};

    if(issame(v1, v2)) {
        cout << "The vectors are same" << endl;
    } else {
        cout << "The vectors are not same" << endl;
    }

    vector<int> result = pluck({1, 2, 3, 4, 5});
    for(int i = 0; i < result.size(); i++) {
        if(i % 2 == 0) {
            cout << "Min Even: " << result[i] << endl;
        } else {
            cout << "Index: " << result[i] << endl;
        }
    }

    return 0;
}