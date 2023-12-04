```
#include <iostream>
#include <set>

int get_unique_elements(std::vector<int>& my_list) {
    std::set<int> unique_elements;
    for (int i : my_list) {
        if (unique_elements.find(i) == unique_elements.end()) {
            unique_elements.insert(i);
        }
    }
    return unique_elements.size();
}
```