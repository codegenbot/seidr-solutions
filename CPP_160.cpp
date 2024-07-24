#include <iostream>
#include <vector>
#include <string>

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
    
    double output = 0.0;

    for(int i = 0; i < ops.size(); i++) {
        if(ops[i] == "+") {
            output += static_cast<double>(args[i]);
        } else if(ops[i] == "-") {
            output -= static_cast<double>(args[i]);
        } else if(ops[i] == "*") {
            output *= static_cast<double>(args[i]);
        } else if(ops[i] == "/") {
            assert(args[i] != 0);
            output /= static_cast<double>(args[i]);
        }
    }
    
    std::cout << "Output: " << output << std::endl;
}