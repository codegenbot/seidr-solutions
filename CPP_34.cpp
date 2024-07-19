#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    unordered_set<int> s(l.begin(), l.end());
    return vector<int>(s.begin(), s.end());
}

int driver() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output = unique(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}

int main() {
    driver();
    return 0;
}