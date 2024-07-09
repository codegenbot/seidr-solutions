#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size();
}

vector<int> pluck(vector<int> arr) {
    vector<int> result;
    int smallest_even = INT_MAX;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            // Initialize the result with a single element
            result = {smallest_even};
        }
    }

    return result;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}) , {}));
    return 0;
}