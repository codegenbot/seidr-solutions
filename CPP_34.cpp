#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output;
    copy(unique(input.begin(), input.end()), input.end(), back_inserter(output));
    sort(output.begin(), output.end());
    assert(std::equal(std::unique(input.begin(), input.end()), input.end(), output.begin()));
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}