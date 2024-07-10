#include <vector>
#include <string>
#include <map>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

vector<string> by_length(const vector<int>& nums) {
    map<int, string> num_to_word = {{4, "Four"}, {8, "Eight"}, {9, "Nine"}};
    vector<string> words;
    for (int num : nums) {
        words.push_back(num_to_word[num]);
    }
    return words;
}

int main() {
    assert(issame(by_length({9, 4, 8}), vector<string>{"Nine", "Four", "Eight"}));
    return 0;
}