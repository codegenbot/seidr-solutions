#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), l.end());
    sort(result.begin(), result.end());
    return result;
}

vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
vector<int> output = unique(input);
for (int i : output) {
    cout << i << " ";
}