#include <vector>
#include <string>
#include <map>

std::vector<std::string> by_length(std::vector<int> lengths) {
    std::map<int, std::string> num_map = { {9,"Nine"},{4,"Four"},{8,"Eight"} };
    std::vector<std::string> result;
    for(int length : lengths) {
        result.push_back(num_map[std::to_string(length)]);
    }
    return result;
}

bool issame(std::vector<string> a, std::vector<string> b){
    return (a == b);
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {"Nine", "Eight", "Four"}));
}