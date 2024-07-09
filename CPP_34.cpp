#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> output(input.begin(), input.end());
    sort(output.begin(), output.end()); 
    stable_partition(output.begin(), output.end(), [](int x) { return x > 0; }); 
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}