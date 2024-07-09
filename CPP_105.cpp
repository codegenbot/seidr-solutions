#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size())
        return false;
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

vector<string> by_length(vector<int> arr) {
    vector<string> nums;
    for (int i : arr) {
        if (i >= 1 && i <= 9)
            nums.push_back(to_string(i) == "1" ? "One"
                            : to_string(i) == "2" ? "Two"
                            : to_string(i) == "3" ? "Three"
                            : to_string(i) == "4" ? "Four"
                            : to_string(i) == "5" ? "Five"
                            : to_string(i) == "6" ? "Six"
                            : to_string(i) == "7" ? "Seven"
                            : to_string(i) == "8" ? "Eight"
                            : "Nine");
    }
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    return nums;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
}