```
#include <iostream>
#include <vector>
#include <boost/variant.hpp>

using namespace boost;

int main() {
    std::vector<variant<int>> values = {1, "hello", 2.5f, 3, "world", 4};
    
    for (const auto& value : values) {
        if (holds_alternative<int>(value)) {
            int v = get<int>(value);
            std::cout << "Integer: " << v << std::endl;
        }
    }
}