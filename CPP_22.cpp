#include <any>
#include <vector>

bool issame(int a, int b) { return a == b; }
bool issame(char a, char b) { return a == b; }

std::vector<int> filter_integers(std::any values) {
    std::vector<int> result;
    for (auto& value : values) {
        if (std::any_cast<bool>(values.type()) && issame(int(value), 0)) {
            result.push_back(int(value));
        }
    }
    return result;
}