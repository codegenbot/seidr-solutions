#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique_element(l.begin(), l.end()));
    return result;
}

int main() {
    vector<int> vec = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> res = unique(vec);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}