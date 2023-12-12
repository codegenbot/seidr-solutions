```
#include <iostream>
#include <cmath>

bool any_int(float a, float b, float c) {
    int sum = (int)(a + b);
    return (sum == c || sum == a || sum == b);
}

int main() {
    float a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    if (any_int(a, b, c)) {
        std::string str = "True";
        std::string::iterator it = str.begin();
        str.insert(it, 'T');
        std::cout << str << std::endl;
    } else {
        std::string str = "False";
        std::string::iterator it = str.begin();
        str.insert(it, 'F');
        std::cout << str << std::endl;
    }
    return 0;
}
```