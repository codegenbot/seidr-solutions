```cpp
#include <iostream>
#include <vector>
#include <string>

double do_algebra(const std::vector<std::string>& ops, const std::vector<int>& args) {
    double output = 0.0;

    for(int i = 0; i < ops.size(); i++) {
        if(ops[i][0] == "+") { 
            output += static_cast<double>(args[i]);
        } else if(ops[i][0] == "-") {
            output -= static_cast<double>(args[i]);
        } else if(ops[i][0] == "*") {
            output *= static_cast<double>(args[i]);
        } else if(ops[i][0] == "/") {
            if(args[i] != 0) {
                output /= static_cast<double>(args[i]);
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                return 0.0;
            }
        }
    }

    return output;
}

int main() {
    std::vector<std::string> ops; 
    std::vector<int> args;

    while(true) {
        std::cout << "Enter an operator (+, -, * or / or 'q' to quit): ";
        char op;
        int arg;
        std::cin >> op;

        if(op == 'q') break;
        
        args.push_back(arg);
        ops.push_back(std::string(1, op)); 
    }
    
    double output = do_algebra(ops, args);

    std::cout << "Output: " << output << std::endl;

    return 0;
}