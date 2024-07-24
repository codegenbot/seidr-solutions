```cpp
#include <iostream>
#include <vector>

std::vector<std::string> expressions;
double do_algebra(const std::vector<std::string>& ops, const std::vector<int>& args) {
    double result = (double)args[0];
    
    for(int i = 0; i < ops.size(); i++) {
        if(ops[i] == "//") {
            result /= (double)args[i+1];
        } else if(ops[i] == "*") {
            result *= (double)args[i+1];
        }
    }
    
    return result;
}

int main() {
    std::vector<std::string> ops = {"//", "*"};
    int num1 = 42;
    int num2 = 24; 
    double output = do_algebra(ops, {num1, num2});
    std::cout << "Output: " << output << std::endl;
    return 0;
}