```
#include <iostream>
#include <cmath>

bool iscuber(int num) {
    int c = round(cbrt(num));
    return (c * c * c == num);
}

int main() {
    assert(iscuber(0) == false);
    std::cout << "Enter a number: ";
    int num;
    std::cin >> num;
    if (iscuber(num)) {
        std::string str = std::to_string(num); 
        std::cout << str << " is a perfect cube.\n";
    } else {
        std::cout << num << " is not a perfect cube.\n";
    }
    return 0;
}