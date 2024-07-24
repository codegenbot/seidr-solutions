#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    for (int x : l) {
        auto it = std::find(result.begin(), result.end(), x);
        if (it == result.end())
            result.push_back(x);
    }
    return result;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result(l.size()); 
    for (int i : l) {
        auto it = std::find(result.begin(), result.end(), i);
        if (it == result.end())
            result.push_back(i);
    }
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}