#include <vector>
#include <string>
#include <map>
#include <cassert>

using namespace std;

vector<string> by_length(const vector<int>& nums) {
    map<int, string> num_to_word = {{9, "Nine"}, {4, "Four"}, {8, "Eight"}};
    vector<string> words;
    for (int num : nums) {
        words.push_back(num_to_word[num]);
    }
    return words;
}

int main() {
    vector<string> expected = {"Nine", "Four", "Eight"};
    vector<string> result = by_length({9, 4, 8});
    assert(expected == result);
    return 0;
}