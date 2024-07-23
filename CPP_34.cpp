#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    sort(unique(l.begin(), l.end()), l.end());
    return vector<int>(unique(l.begin(), l.end()).begin(), 
                      erase(unique(l.begin(), l.end()).end()-1));
}

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output = unique(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}