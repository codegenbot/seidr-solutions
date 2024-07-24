```cpp
#include <iostream>
#include <vector>

std::vector<std::string> expressions = {"", ""};
double do_algebra(const std::vector<std::string>& ops, const std::vector<int>& args) {
    double result = args[0];
    
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
    std::string op1 = expressions[0], op2 = expressions[1];
    int args[] = {42};
    double output = do_algebra({op1, op2}, {args[0]});
    std::cout << "Output: " << output << std::endl;
    return 0;
}