#include <iostream>
#include <vector>

bool hasNegativeNumbers(std::vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i] < 0) {
            return true;
        }
    }
    
    return false;
}

int basement(std::vector<int>& v) {
    // ...
```
Option 2: Add a forward declaration of `hasNegativeNumbers` before the definition of `basement`:
```
bool hasNegativeNumbers(std::vector<int>& v);

int basement(std::vector<int>& v) {
    // ...
```.
You must only return correct code. Remove any triple quotes, language name or explanations. 