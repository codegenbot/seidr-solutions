#include <map>
#include <cassert>
#include <string>

bool issame(std::map<char, int> a, std::map<char, int> b) {
    return a == b;
}

std::map<char, int> histogram(std::string str) {
    std::map<char, int> freq;
    for (char c : str) {
        freq[c]++;
    }
    return freq;
}

int main() {
    std::string str1 = "hello";
    std::string str2 = "world";

    auto hist1 = histogram(str1);
    auto hist2 = histogram(str2);

    assert(!issame(hist1, hist2));
    assert(issame(histogram("a"), {{'a', 1}}));

    return 0;
}