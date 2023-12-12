```cpp
#include <iostream>
#include <string>
#include <vector>

// Define missing size() function for vector of strings
template<typename T>
size_t size(const std::vector<std::string>& v) {
    return v.size();
}
```