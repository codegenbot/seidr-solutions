#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&](const string& s) {
        return find(b.begin(), b.end(), s) != b.end();
    });
}

int main(){
    int num_strings;
    std::cout << "Enter the number of strings: ";
    std::cin >> num_strings;

    vector<string> strings(num_strings);
    for (auto &s : strings) {
        std::cout << "Enter string " << (strings.begin() - s.begin()) + 1 << ": ";
        std::cin >> s;
    }

    int num_substrings;
    std::cout << "Enter the number of substrings: ";
    std::cin >> num_substrings;

    vector<string> substrings(num_substrings);
    for (auto &s : substrings) {
        std::cout << "Enter substring " << (substrings.begin() - s.begin()) + 1 << ": ";
        std::cin >> s;
    }

    vector<string> filtered_strings = filter_by_substring(strings, substrings[0]);
    if(issame(filtered_strings, strings)) {
        cout << "All strings contain the substring: " << substrings[0] << endl;
    } else {
        cout << "Not all strings contain the substring: " << substrings[0] << endl;
    }

    return 0;
}