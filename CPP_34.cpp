#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> unique(vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    vector<int> input;
    int n, value;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> value;
        input.push_back(value);
    }
    vector<int> result = unique(input);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}