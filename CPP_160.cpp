#include <iostream>
#include <vector>
#include <string>

double do_algebra(const std::vector<std::string>& ops, const std::vector<int>& args) {
    double result = args[0];
    for(int i = 0; i < ops.size(); ++i) {
        if(ops[i] == "+") {
            result += args[i+1];
        } else if(ops[i] == "-") {
            result -= args[i+1];
        } else if(ops[i] == "*") {
            result *= args[i+1];
        } else if(ops[i] == "/") {
            if(args[i+1] != 0) {
                result /= args[i+1];
            } else {
                std::cout << "Error: Division by zero." << std::endl;
                return -1.0; // Return error value
            }
        }
    }
    return result;
}

int main() {
    std::vector<std::string> ops; 
    std::vector<int> args;

    int count = 0;
    while(count < 5) { 
        std::cout << "Enter an operator (+, -, * or / or 'q' to quit): ";
        std::string op;
        int arg;
        std::cin >> op >> std::ws >> arg;

        if(op == "q") break;
        
        ops.push_back(op);
        args.push_back(arg);
        count++;
    }
    
    double output = do_algebra(ops, args);

    std::cout << "Output: " << output << std::endl;

    return 0;
}