#include <cassert>
class _160 {
public:
    int do_algebra(const std::pair<std::vector<std::string>, std::vector<int>>& args) {
        if (std::find(std::begin(args.second), std::end(args.second), 0) != std::end(args.second)) {
            return 0;
        }
        int result = *std::max_element(std::begin(args.second), std::end(args.second));
        for (int i = 0; i < args.first.size(); ++i) {
            if (args.first[i] == "*") {
                result *= *std::max_element(std::begin(args.second), std::end(args.second));
            } else if (args.first[i] == "//") {
                result /= *std::min_element(std::begin(args.second), std::end(args.second));
            }
        }
        return result;
    }
};

int main() {
    _160 obj;
    assert(obj.do_algebra({{"/", "*"}, {7, 3, 4}}) == 8);
    return 0;
}