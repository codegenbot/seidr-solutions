#include <string>

int main() {
    std::string a = "hello";
    std::string b = "hi";

    std::string result = compare_one(a, b);

    std::cout << result << std::endl;

    return 0;
}

std::string compare_one(std::string a, std::string b) {
    if (a > b)
        return a;
    else if (a < b)
        return b;
    else
        return "None";
}