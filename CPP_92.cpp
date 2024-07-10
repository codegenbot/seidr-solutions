#include <iostream>
#include <assert.h>
#include <string>
#include <cmath>

bool any_int(float a, float b, float c) {
    std::string sai = std::to_string(round(a));
    std::string sbi = std::to_string(round(b));
    std::string sci = std::to_string(round(c));

    if ((sai == sbi + sci) || (sai == sbi - sci) || (sai == sci + sbi) || (sai == sci - sbi))
        return true;
    else
        return false;
}

int main() {
    assert(any_int(3.01f, 4.0f, 7.0f) == false);
    std::cout << "Code runs correctly." << std::endl;
    return 0;
}