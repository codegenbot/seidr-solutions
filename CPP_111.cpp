#include <map>
#include <cassert>

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
    
    std::map<char, int> hist1 = histogram(str1);
    std::map<char, int> hist2 = histogram(str2);

    assert(!issame(hist1, hist2));

    return 0;
}