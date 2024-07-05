#include <sstream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cassert>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> num_map = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
    };
    map<int, string> rev_map;
    for (auto& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }

    istringstream iss(numbers);
    vector<int> num_list;
    string word;
    while (iss >> word) {
        num_list.push_back(num_map[word]);
    }

    sort(num_list.begin(), num_list.end());

    ostringstream oss;
    for (size_t i = 0; i < num_list.size(); ++i) {
        if (i > 0) oss << " ";
        oss << rev_map[num_list[i]];
    }

    return oss.str();
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}