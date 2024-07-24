#include <iostream>
#include <vector>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    for (int x : l) {
        if (find(result.begin(), result.end(), x) == result.end())
            result.push_back(x);
    }
    return result;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result(l.size()); // Initialize with the size of input
    for (int i : l) {
        if (find(result.begin(), result.end(), i) == result.end())
            result.push_back(i);
    }
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}