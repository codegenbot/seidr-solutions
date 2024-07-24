```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), l.end()); 
    sort(result.begin(), result.end());
    auto it = unique_copy(result.begin(), result.end()); 
    result.erase(it, result.end());
    return result;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    try {
        vector<int> result = unique(l);
        for (int i : result) {
            cout << i << " ";
        }
    } catch (...) {
        cerr << "An error occurred. Please check the input." << endl;
    }
    return 0;
}