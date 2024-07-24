#include <iostream>
#include <vector>

double do_algebra(const std::vector<std::string>& ops, const std::vector<int>& values) {
    // implement your algebra operations here
    return 0;  // or some other default value if the operation is not implemented yet
}

int main() {
    std::vector<std::string> expressions = {"+", "42"};  
    double output = do_algebra({expressions[0], expressions[1], "42"});
    return 0;
}