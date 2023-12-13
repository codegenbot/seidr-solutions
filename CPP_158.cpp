```
#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string find_max(const std::vector<std::string>& words) {
    // ...
}

int main() {
    const std::vector<std::string> words{"play", "play", "play"};
    assert((find_max(words) == "play"));
    return 0;
}
```

Alternatively, you could use a `std::set<std::string>` instead of a `std::vector<std::string>`. This would allow you to pass in a set of strings as input to the `find_max` function.
```
#include <iostream>
#include <set>
#include <string>
#include <cassert>

std::string find_max(const std::set<std::string>& words) {
    // ...
}

int main() {
    const std::set<std::string> words{"play", "play", "play"};
    assert((find_max(words) == "play"));
    return 0;
}
```