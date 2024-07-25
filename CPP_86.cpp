#include <cassert>
#include <string>

class Contest {
public:
    static std::string anti_shuffle(const std::string& input);
};

std::string Contest::anti_shuffle(const std::string& input) {
    std::string result = input;
    for (size_t i = 1; i < result.size(); i += 2) {
        std::swap(result[i - 1], result[i]);
    }
    return result;
}

int main() {
    assert(Contest::anti_shuffle("Hi. My name is Mister Robot. How are you?") == ".Hi My aemn is Meirst .Rboot How aer ?ouy");

    return 0;
}