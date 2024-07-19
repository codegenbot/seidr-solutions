#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string sort_numbers(const string& str) {
    vector<string> numbers;
    size_t pos = 0, found;
    
    while ((found = str.find_first_of(" ", pos)) != string::npos) {
        numbers.push_back(str.substr(pos, found - pos));
        pos = found + 1;
    }
    numbers.push_back(str.substr(pos));

    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    map<int, string> revNumMap;
    for (auto const& pair : numMap) {
        revNumMap[pair.second] = pair.first;
    }

    sort(numbers.begin(), numbers.end(), [&](const string& a, const string& b) {
        return numMap[a] < numMap[b];
    });

    string result;
    for (const auto& num : numbers) {
        result += num + " ";
    }
    result.pop_back(); // Remove the extra space at the end
    return result;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}