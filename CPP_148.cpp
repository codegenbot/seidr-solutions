#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec1, const std::vector<std::string>& vec2) {
    return vec1 == vec2;
}

int main() {
    if (!issame(bf("Jupiter", "Makemake"), {{"Jupiter"}, {"Makemake"}})) {
        return 1; 
    }
    return 0;
}