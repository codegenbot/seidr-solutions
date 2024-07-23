#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    sort(unique(l.begin(), l.end()), l.end());
    return vector<int>(l.begin(), find_if(l.begin(), l.end(), bind2nd(not_equal_to<int>(), *(l.begin()))));
}

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output = unique(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}