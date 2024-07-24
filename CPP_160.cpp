#include <cmath>
#include <string>
#include <vector>

double do_algebra(const std::vector<std::string>& expressions, const std::vector<std::string>& operators) {
    double result = 0;
    if (stoi(operators[1]) == 0) {
        double a = stod(expressions[0]);
        double b = stod(expressions[1]);
        result = pow(a, b);
    } else {
        // ... rest of your code ...
    }
    return result;
}

int main() {
    std::vector<std::string> expressions = {"2.5", "3"};
    std::vector<std::string> operators = {"+", "0"};
    double output = do_algebra(expressions, operators);
    return 0;
}