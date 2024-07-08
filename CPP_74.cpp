#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return (a == b);
}

int main() {
    if (issame({"this"}, {})) {
        assert(isspace());
    }
    return 0;
}