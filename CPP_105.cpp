#include <vector>
#include <map>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> result;
    map<int, string> num_map = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, 
                                 {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            result.push_back(num_map[i]);
    }
    sort(result.begin(), result.end());
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> arr = {9, 4, 8};
    vector<string> output = by_length(arr);
    bool test = issame(output, {"Nine", "Eight", "Four"});
    assert(test);
    return 0;
}