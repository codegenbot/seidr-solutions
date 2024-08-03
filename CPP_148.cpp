#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    return v1 == v2;
}

std::vector<std::string> bf(std::vector<std::string> planets, int idx1, int idx2) {
    if (idx1 >= planets.size() || idx2 >= planets.size()) {
        return {};
    }

    std::sort(planets.begin(), planets.end());

    for (int i = 0; i < planets.size(); i++) {
        if (i == idx1) continue;
        if (i == idx2) continue;

        return planets;
    }

    return {};
}