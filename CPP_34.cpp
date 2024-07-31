```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    if(l.empty()) return vector<int>();

    vector<int> result;
    sort(l.begin(), l.end());
    copy_if(l.begin(), l.end(),
                 back_inserter(result),
                 [](int x) {return find_first_of(result.begin(), result.end(), x) == result.end();});
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