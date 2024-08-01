#include <vector>
#include <cassert>
#include <sstream>

std::vector<int> parse_music(const std::string& music) {
    std::vector<int> result;
    std::istringstream iss(music);
    char c;
    int num;
    
    while (iss >> c >> num) {
        result.push_back(num);
    }

    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(issame(parse_music("o| .| o| .| o o| o o|"), {2, 1, 2, 1, 4, 2, 4, 2}));
    return 0;
}