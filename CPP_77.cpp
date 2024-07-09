#include <cassert>

bool isCube(int n) {
    int i = 1;
    while (i * i * i <= n) {
        if (i * i * i == n)
            return true;
        i++;
    }
    return false;

}

int cubeRoot(int n) {
    int i = 1;
    while (i * i * i < n) {
        i++;
    }
    if (i * i * i == n)
        return i;
    else
        return -1;
}

int main() {
    assert(isCube(1729) == false);
    int result = cubeRoot(192);
    if(result == -1) 
        std::cout << "No perfect cube root found." << std::endl;
    else
        std::cout << "The cube root of " << 192 << " is " << result << "." << std::endl;
    return 0;
}