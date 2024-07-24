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
        } else {
            numStack.push((double)args[i]);
        }
    }
    return numStack.top();
}

int main() {
    std::vector<std::string> ops;
    std::vector<int> args;

    int count = 0;
    while(count < 5) { 
        char* temp = new char[1024]; // assuming max length of input string is 1023
        std::cout << "Enter an operator (+, -, * or / or 'q' to quit): ";
        std::cin.get(temp, 1024);
        std::string line = temp;
        delete[] temp; 

        if(line == "q") break;

        size_t pos = line.find(' ');
        std::string op = line.substr(0, pos);
        int arg = stoi(line.substr(pos+1));
        
        ops.push_back(op);
        args.push_back(arg);
        count++;
    }

    double output = do_algebra(ops, args);

    std::cout << "Output: " << output << std::endl;

    return 0;
}