```cpp
#include <iostream>
#include <vector>
#include <string>
#include <stack>

double do_algebra(std::vector<std::string> ops, std::vector<int> args) {
    std::stack<double> numStack;
    for(int i = 0; i < ops.size(); ++i) {
        if(ops[i] == "+") {
            double b = numStack.top();
            numStack.pop();
            double a = numStack.top();
            numStack.pop();
            numStack.push(a + b);
        } else if(ops[i] == "-") {
            double b = numStack.top();
            numStack.pop();
            double a = numStack.top();
            numStack.pop();
            numStack.push(a - b);
        } else if(ops[i] == "*") {
            double b = numStack.top();
            numStack.pop();
            double a = numStack.top();
            numStack.pop();
            numStack.push(a * b);
        } else if(ops[i] == "/") {
            double b = numStack.top();
            numStack.pop();
            double a = numStack.top();
            numStack.pop();
            numStack.push(a / b);
        } 
    }
    return numStack.top();
}

int main() {
    std::vector<std::string> ops;
    std::vector<int> args;

    int count = 0;
    while(count < 5) { 
        std::cout << "Enter an operator (+, -, * or /): ";
        char op;
        std::cin >> op;

        if(op == 'q') break;
        
        ops.push_back(std::string(1, op));
        count++;

        if(count < 5) {
            std::cout << "Enter an operand: ";
            int arg;
            std::cin >> arg;
            args.push_back(arg);
            count++;
        }
    }

    double output = do_algebra(ops, args);

    std::cout << "Output: " << output << std::endl;

    return 0;
}