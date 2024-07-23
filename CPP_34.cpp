#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), remove_if(l.begin(), l.end(), bind(first_argument_type(), _1, _2)).end());
    return result;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result = unique(l);
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}