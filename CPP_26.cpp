#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<int> remove_duplicates(vector<int> numbers) {
    vector<int> result(1); // Initialize with a size of 1.
    for (int num : numbers) {
        if (std::find_if(result.begin(), result.end(), [num](int x) { return x != num; }) == result.end()) {
            result.push_back(num);
        }
    }
    return result;
}