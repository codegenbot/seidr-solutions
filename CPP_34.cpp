```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    sort(input.begin(), input.end());
    auto lastUniq = unique(input.begin(), input.end());
    input.erase(lastUniq, input.end());
    for (int i : input) {
        cout << i << " ";
    }
    return 0;
}