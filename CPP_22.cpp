```
#include <iostream>
#include <vector>
#include <string>
#include <variant>
using namespace std;

// Forward declaration for the list_any type
struct list_any;

std::vector<int> filter_integers(const vector<list_any>& values) {
    // Initialize an empty output vector
    std::vector<int> result;
    
    // Loop through each element in the input vector
    for (auto& value : values) {
        // If the current element is a integer, add it to the output vector
        if (value.type() == typeid(int)) {
            result.push_back(std::get<int>(value));
        }
    }
    
    return result;
}
```