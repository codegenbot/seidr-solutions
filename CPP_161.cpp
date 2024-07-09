#include <algorithm>
#include <iostream>
#include <string>

std::string solve(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (c == 'o') {
            count++;
        }
    }

    return result.empty() ? s.substr(0, s.size()) : std::accumulate(s.rbegin(), s.rend(), "", [&](char c){ return result + c; });
}