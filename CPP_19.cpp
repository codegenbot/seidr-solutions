#include <map>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

unordered_map<int, string> num_map = {
    {0, "zero"},
    {1, "one"},
    {2, "two"},
    {3, "three"},
    {4, "four"},
    {5, "five"},
    {6, "six"},
    {7, "seven"},
    {8, "eight"},
    {9, "nine"}
};

string sort_numbers(string numbers);

int main() {
    assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}

string sort_numbers(string numbers) {
    unordered_map<int, string> rev_map;
    for (const auto& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }

    vector<string> num_strings;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        num_strings.push_back(token);
    }

    sort(num_strings.begin(), num_strings.end(), [&](const string& a, const string& b) {
        return num_map[a] < num_map[b];
    });

    string result;
    for (const auto& num : num_strings) {
        result += num + " ";
    }

    result.pop_back(); // Remove extra space at the end
    return result;
}