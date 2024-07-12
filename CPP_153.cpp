#include <vector>
#include <string>
#include <algorithm>

std::vector<std::pair<std::string, std::string>> extensions;

int compare(const std::pair<std::string, std::string>& a, const std::pair<std::string, std::string>& b) {
    return a.second.size() - b.second.size();
}

std::string Strongest_Extension(std::string type, const std::vector<std::string>& strong) {
    extensions.push_back({type, *max_element(strong.begin(), strong.end(), compare)});
    return extensions.back().first + "." + extensions.back().second;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}