```cpp
#include <iostream>
#include <string>

int main() {
    if (!correct_bracketing("()()(()())()))")) {
        std::cout << "Correct bracketing test failed." << std::endl;
    } else {
        std::cout << "Correct bracketing test passed." << std::endl;
    }
    return 0;
}