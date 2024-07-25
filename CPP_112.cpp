#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const vector<string>& a, const vector<string>& b);

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c);

bool issame(const vector<string>& a, const vector<string>& b) {
    return a == b;
}

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    std::string result = "";
    for (char ch : s) {
        if (c.find(ch) == string::npos) {
            result += ch;
        }
    }
    std::string result_reverse = result;
    std::reverse(result_reverse.begin(), result_reverse.end());
    return { result, result == result_reverse ? "True" : "False" };
}

assert(issame(reverse_delete("mamma", "mia"), { "", "True" }));