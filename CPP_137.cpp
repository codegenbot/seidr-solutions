#include <iostream>
#include <string> // Include the <string> header

template <typename T>
T compare_one(const T& a, const T& b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    }
    return T();
}

int main() {
    using std::string; // Declare std::string explicitly

    assert(compare_one(string("1"), std::to_string(1)).empty());
    
    return 0;
}