```
#include <iostream>
#include <string>
#include <vector>

bool issame(std::vector<std::string> a){...}

int main() {
    std::vector<std::string> input = {"( ) (( )) (( )( ))"};
    std::vector<std::string> expected_output = {"()", "(())", "(()())"};

    assert (issame("( ) (( )) (( )( ))",{"()", "(())", "(()())"}));

    return 0;
}
```






