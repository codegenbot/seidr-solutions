#include <cassert>
class _160 {
public:
    int do_algebra(std::vector<std::string>, std::vector<int>) {
        if (std::find(std::begin(std::get<1>(args)), std::end(std::get<1>(args)), 0) != std::end(std::get<1>(args))) {
            return 0;
        }
        int result = *std::max_element(std::begin(std::get<1>(args)), std::end(std::get<1>(args)));
        for (int i = 0; i < std::size(args[0]); ++i) {
            if (args[0][i] == '*') {
                result *= *std::max_element(std::begin(std::get<1>(args)), std::end(std::get<1>(args)));
            } else if (args[0][i] == '//') {
                result /= *std::min_element(std::begin(std::get<1>(args)), std::end(std::get<1>(args)));
            }
        }
        return result;
    }
};

int main() {
    _160 obj;
    assert(obj.do_algebra({"//", "*"}, {7, 3, 4}) == 8);
    return 0;
}