```
#include <iostream>
#include <vector>
#include <string>

std::string longest(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return "";
    }

    auto max_length = 0;
    std::string result;

    for (const auto& str : strings) {
        if (str.size() > max_length) {
            max_length = str.size();
            result = str;
        }
    }

    return result;
}
```