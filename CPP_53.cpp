#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main() {
    std::srand(std::time(0)); 
    int randomNum = std::rand() % 1000; 
    std::string strRandomNum = std::to_string(randomNum); 
    std::cout << "Random Number: " << strRandomNum << std::endl;
}