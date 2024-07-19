```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(std::remove_if(l.begin(), l.end(), [&l](int i){ return std::count(l.begin(), l.end(), i) > 1; }), l.end());
    return result;
}

int driver() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output = unique(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}

int main() {
    driver();
    return 0;
}