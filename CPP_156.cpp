```cpp
#include <vector>
#include <string>

std::vector<std::string> int_to_mini_roman(int n) {
    std::vector<std::string> roman;
    if(n >= 1000) {
        while (n >= 1000) {
            roman.push_back("M");
            n -= 1000;
        }
    }
    if(n >= 900) {
        while (n >= 900) {
            roman.push_back("CM");
            n -= 900;
        }
    }
    if(n >= 500) {
        while (n >= 500) {
            roman.push_back("D");
            n -= 500;
        }
    }
    if(n >= 400) {
        while (n >= 400) {
            roman.push_back("CD");
            n -= 400;
        }
    }
    if(n >= 100) {
        while (n >= 100) {
            if(n >= 900) {
                roman.push_back("CM");
                n -= 900;
            } else if(n >= 400) {
                roman.push_back("CD");
                n -= 400;
            } else {
                roman.push_back("C");
                n -= 100;
            }
        }
    }
    if(n >= 90) {
        while (n >= 90) {
            roman.push_back("XC");
            n -= 90;
        }
    }
    if(n >= 50) {
        while (n >= 50) {
            roman.push_back("L");
            n -= 50;
        }
    }
    if(n >= 40) {
        while (n >= 40) {
            roman.push_back("XL");
            n -= 40;
        }
    }
    if(n >= 10) {
        while (n >= 10) {
            if(n >= 90) {
                roman.push_back("XC");
                n -= 90;
            } else if(n >= 40) {
                roman.push_back("XL");
                n -= 40;
            } else {
                roman.push_back("X");
                n -= 10;
            }
        }
    }
    if(n >= 9) {
        while (n >= 9) {
            roman.push_back("IX");
            n -= 9;
        }
    }
    if(n >= 5) {
        while (n >= 5) {
            roman.push_back("V");
            n -= 5;
        }
    }
    if(n >= 4) {
        while (n >= 4) {
            roman.push_back("IV");
            n -= 4;
        }
    }
    if(n > 0) {
        roman.push_back(std::to_string(n));
    }
    return roman;
}