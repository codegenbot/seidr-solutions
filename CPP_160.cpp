```
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> expressions;

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
    std::vector<std::string> ops;
    std::vector<int> args;

    while(true) {
        std::cout << "Enter an operator (+, -, *, / or 'q' to quit): ";
        std::string op;
        std::cin >> op;
        
        if(op == "q") break;
        
        int arg;
        std::cout << "Enter the argument: ";
        std::cin >> arg;
        
        ops.push_back(op);
        args.push_back(arg);
    }
    
    double output = do_algebra(ops, args);
    std::cout << "Output: " << output << std::endl;
    return 0;