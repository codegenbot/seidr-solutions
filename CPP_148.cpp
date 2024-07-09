#include <vector>
#include <string>

std::vector<std::string> bf(const std::string& a, const std::string& b) {
    if(a==b) {
        return {"same"};
    } else {
        return {};
    }
}

bool issame(std::vector<std::string> vec1, std::vector<std::string> vec2) {
    return (vec1.size() == vec2.size()) && std::equal(vec1.begin(), vec1.end(), vec2.begin());
}

int main() {
    if (bf("Jupiter", "Makemake") == {}) {
        assert(true);
    } else {
        assert(false);  // bf didn't return an empty vector as expected
    }
    return 0;
}