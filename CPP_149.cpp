#include <vector>
#include <algorithm>
#include <string>

// Function to check if two lists are same
bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

// Function to calculate the sum of lengths of strings in each sublist that are in alphabetical order
int sorted_list_sum(std::vector<std::vector<std::string>> lst) {
    int sum = 0;
    for (auto &sublist : lst) {
        std::sort(sublist.begin(), sublist.end());
        for (const auto &str : sublist) {
            sum += str.size();
        }
    }
    return sum;
}

int main() {
    vector<vector<string>> lst = {{"aaaa", "bbbb"}, {"dd"}, {"cc"}};
    assert(sorted_list_sum(lst) == 2);
    return 0;
}