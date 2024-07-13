#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            vector<int> temp;
            for (int j = 0; j < l.size(); j++) {
                if (j % 3 == 0) {
                    temp.push_back(l[j]);
                }
            }
            sort(temp.begin(), temp.end());
            result.insert(result.end(), temp.begin(), temp.end());
        } else {
            result.push_back(l[i]);
        }
    }
    return result;
}

int main() {
    vector<int> l = {1, 2, 3};
    vector<int> result = sort_third(l);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    l = {5, 6, 3, 4, 8, 9, 2};
    result = sort_third(l);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}