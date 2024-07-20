#include <map>

std::map<char, int> histogram(std::string test);

bool issame(std::map<char, int> a, std::map<char, int> b){
    // add implementation
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    // add more test cases
}

std::map<char, int> histogram(std::string test) {
    std::map<char, int> result;
    std::map<char, int> count;

    for (char c : test) {
        if (c != ' ') {
            count[c]++;
        }
    }

    int maxCount = 0;
    for (auto it : count) {
        maxCount = std::max(maxCount, it.second);
    }

    for (auto it : count) {
        if (it.second == maxCount) {
            result[it.first] = it.second;
        }
    }

    return result;
}