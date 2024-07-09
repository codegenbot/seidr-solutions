#include <iostream>
#include <set>
using namespace std;

vector<int> unique(vector<int> l) {
    set<int> result(l.begin(), l.end());
    vector<int> output(result.begin(), result.end());
    return output;
}

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output = unique(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}