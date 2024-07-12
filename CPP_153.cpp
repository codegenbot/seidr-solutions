#include <vector>
#include <string>
#include <algorithm>

std::vector<std::pair<std::string, std::string>> extensions;

int compare(const std::pair<std::string, std::string>& a, const std::pair<std::string, std::string>& b) {
    return a.second.size() - b.second.size();
}

std::string Strongest_Extension(std::string type, const std::vector<std::string>& strong) {
    if (strong.empty()) {
        return "";
    }
    
    std::sort(strong.begin(), strong.end(), compare);
    extensions.push_back({type, *std::rbegin(strong)});
    return extensions.back().first + "." + extensions.back().second;
}

int main() {
    assert(Strongest_Extension("Sp", {"671235", "Bb"}) == "Sp.671235");
    return 0;
}