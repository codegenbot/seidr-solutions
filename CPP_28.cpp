#include <string>
#include <vector>

std::string concatenate(const std::vector<std::string>& strings) {
    return std::accumulate(strings.begin(), strings.end(), std::string{}, [](const std::string& a, const std::string& b){return a + b;});
}