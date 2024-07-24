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
    std::string op, op2;
    int arg;

    std::cout << "Enter the first operator and argument: ";
    std::getline(std::cin, op);
    std::cin >> arg;
    expressions.push_back(op);

    std::cout << "Enter the second operator and argument: ";
    std::getline(std::cin, op2);
    std::cin >> arg;
    expressions.push_back(op2);

    int args[] = {arg};
    double output = do_algebra(expressions, {{args[0]}});
    std::cout << "Output: " << output << std::endl;
}