```
#include <iostream>
#include <string>
#include <vector>

bool issame(std::vector<std::string> a){...}

int main() {
    std::vector<std::string> input = {"( ) (( )) (( )( ))"};
    std::vector<std::string> expected_output = {"()", "(())", "(()())"};

    assert(issame(input, expected_output));

    return 0;
}
```

You can also define the function `separate_paren_groups` before calling it.
```
#include <iostream>
#include <string>
#include <vector>

bool issame(std::vector<std::string> a){...}

std::vector<std::string> separate_paren_groups(std::vector<std::string> input){...}

int main() {
    std::vector<std::string> input = {"( ) (( )) (( )( ))"};
    std::vector<std::string> expected_output = {"()", "(())", "(()())"};

    assert(issame(input, expected_output));

    return 0;
}
```