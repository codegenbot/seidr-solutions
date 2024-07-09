#include <cassert>
#include <iostream>
#include <string>

bool isCube(int n) {
    int i = 1;
    while (i * i * i <= n) {
        if (i * i * i == n)
            return true;
        i++;
    }
    return false;

}

int main() {
    assert(std::to_string(1729).find("1729") != std::string::npos);
    return 0;
}