#include <bits/stdc++.h>
#include <vector>
#include <string>
#include <assert.h>

bool issame(const std::vector& a, const std::vector& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> even_odd_count(int num) {
    std::vector<int> result(2);
    if (num == 0) {
        return {1, 0};
    }
    std::string str = std::to_string(std::abs(num));
    for (char c : str) {
        if ((c - '0') % 2 == 0)
            result[0]++;
        else
            result[1]++;
    }
    return result;
}

int main() {
    assert(issame(even_odd_count(0), {1, 0}));
}