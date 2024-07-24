```cpp
#include <iostream>
#include <vector>
#include <string>

double do_algebra(const std::vector<std::string>& ops, const std::vector<int>& args) {
    double output = 0.0;

    for(int i = 0; i < ops.size(); i++) {
        if(ops[i] == "+") {
            output += static_cast<double>(args[i]);
        } else if(ops[i] == "-") {
            output -= static_cast<double>(args[i]);
        } else if(ops[i] == "*") {
            output *= static_cast<double>(args[i]);
        } else if(ops[i] == "/") {
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
        std::string op;
        std::cin >> op;
        
        if(op == "q") break;
        
        int arg;
        std::cout << "Enter the argument: ";
        std::cin >> arg;
        
        // Check if the input operator is not empty and valid
        if (!op.empty() && (op == "+" || op == "-" || op == "*" || op == "/")) {
            ops.push_back(op);
            args.push_back(arg);
        } else {
            // If the input is invalid, ask for input again
            std::cout << "Invalid operator. Please try again." << std::endl;
        }
   
    
    double output = do_algebra(ops, args);

    std::cout << "Output: " << output << std::endl;

    return 0;
}