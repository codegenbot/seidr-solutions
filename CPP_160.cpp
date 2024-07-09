```cpp
#include <cassert>
#include <vector>

class cpp_160 {
public:
    int doAlgebra(const std::vector<std::string>& comments, const std::vector<int>& numbers) {
        int result = 0;
        for (int num : numbers) {
            if (num % 2 == 1) {
                result += num;
            }
        }
        return result;
    }
};

cpp_160 obj;
assert(obj.doAlgebra(std::vector<std::string>({"//", "*"}), {7, 3, 4}) == 8);