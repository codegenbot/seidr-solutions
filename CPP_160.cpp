```cpp
#include <iostream>
#include <vector>

std::vector<std::string> expressions;
double do_algebra(const std::vector<std::string>& ops, const std::vector<int>& args) {
    double result = args[2];
    
    for(int i = 0; i < ops.size(); i++) {
        if(ops[i] == "//") {
            result /= args[i+1];
        } else if(ops[i] == "*") {
            result *= args[i+1];
        }
    }
    
    return result;
}

int main() {
    expressions = {"//", "*"};
    double output = do_algebra({expressions[0], expressions[1], 42});
    std::cout << "Output: " << output << std::endl;
    return 0;
}