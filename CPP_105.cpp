#include <vector>
#include <string>
#include <algorithm>
#include <map>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<std::string> by_length(std::vector<int> arr) {
    std::vector<std::string> result;
    std::map<int, std::string> num_to_name = {
        {1, "One"},
        {2, "Two"},
        {3, "Three"},
        {4, "Four"},
        {5, "Five"},
        {6, "Six"},
        {7, "Seven"},
        {8, "Eight"},
        {9, "Nine"}
    };

    std::vector<int> filtered;
    for (int num : arr) {
        if (num >= 1 && num <= 9) {
            filtered.push_back(num);
        }
    }

    std::sort(filtered.begin(), filtered.end());
    std::reverse(filtered.begin(), filtered.end());

    for (int num : filtered) {
        result.push_back(num_to_name[num]);
    }

    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}), {"Nine", "Eight", "Four"}));
    
    return 0;
}