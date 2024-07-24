```c++
#include <iostream>
#include <vector>
#include <string>
#include <stack>

double do_algebra(std::vector<std::string> ops, std::vector<int> args) {
    std::stack<int> numStack(args.size()); // Initialize the stack with the size of args
    for(int i = 0; i < ops.size(); ++i) {
        if(ops[i] == "+") {
            int b = numStack.top();
            numStack.pop();
            int a = numStack.top();
            numStack.pop();
            numStack.push(a + b);
        } else if(ops[i] == "-") {
            int b = numStack.top();
            numStack.pop();
            int a = numStack.top();
            numStack.pop();
            numStack.push(a - b);
        } else if(ops[i] == "*") {
            int b = numStack.top();
            numStack.pop();
            int a = numStack.top();
            numStack.pop();
            numStack.push(a * b);
        } else if(ops[i] == "/") {
            int b = numStack.top();
            numStack.pop();
            int a = numStack.top();
            numStack.pop();
            numStack.push(a / b);
        } else {
            numStack.push(args[i]);
        }
    }
    return (double)numStack.top();
}

int main() {
    std::vector<std::string> ops;
    std::vector<int> args;

    int count = 0;
    while(count < 5) { 
        std::cout << "Enter an operator (+, -, * or / or 'q' to quit): ";
        std::string line;
        std::cin >> line;

        if(line == "q") break;

        line.erase(0, line.find(' '));
        ops.push_back(line.substr(0));

        args.push_back(stoi(line.substr(line.find(' ') + 1)));
        count++;
    }

    double output = do_algebra(ops, args);

    std::cout << "Output: " << output << std::endl;

    return 0;
}