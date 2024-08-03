#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> reverse_delete(const std::string& s, const std::string& c) {
    return {s, c};
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a[0] == b[0] && a[1] == b[1]);
}

int main() {
    std::string s, c;
    std::cin >> s >> c;

    auto result = reverse_delete(s, c);
    std::cout << result[0] << " " << result[1] << std::endl;

    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));

    return 0;
}