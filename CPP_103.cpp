#include <string>
#include <cassert>

std::string calculateBinary(int a, int b){
    // Implement the calculateBinary function here
}

int main() {
    int rounded_avg = std::stoi(calculateBinary(5, 5), nullptr, 2);
    assert(std::to_string(rounded_avg) == "101");
}