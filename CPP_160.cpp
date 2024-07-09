#include <cassert>
#include <iterator>
#include <vector>
#include <algorithm>

class _160 {
public:
    int do_algebra(const std::vector<std::string>& args, const std::vector<int>& numbers);

};

int main() {
    _160 obj;
    assert(obj.do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}

int _160::do_algebra(const std::vector<std::string>& args, const std::vector<int>& numbers) {
    if (std::find(std::begin(numbers), std::end(numbers), 0) != std::end(numbers)) {
        return 0;
    }
    int result = *std::max_element(std::begin(numbers), std::end(numbers));
    for (int i = 0; i < args.size(); ++i) {
        if (args[i] == "*") {
            result *= *std::max_element(std::begin(numbers), std::end(numbers));
        } else if (args[i] == "//") {
            result /= *std::min_element(std::begin(numbers), std::end(numbers));
        }
    }
    return result;
}