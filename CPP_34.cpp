```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    if(l.empty()) return vector<int>(); // return an empty vector if input is empty

    vector<int> result = l;
    if (!result.empty()) {
        sort(result.begin(), result.end());
    }
    return result;
}

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output = unique(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}