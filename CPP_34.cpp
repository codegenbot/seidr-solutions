#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(std::unique(l.begin(), l.end()), l.end());
    sort(result.begin(), result.end());
    return result;
}

void printOutput(vector<int> output) {
    for (int i : output) {
        cout << i << " ";
    }
    cout << endl;
}