```cpp
#include <iomanip>
#include <sstream>

// ... other includes and definitions ...

int main() {
    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::setfill(2) << std::setw(2) << std::hex << (int)md[i];
    }
    // ... rest of your code ...
}