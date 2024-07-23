#include <iostream>
#include<string>

bool correct_bracketing(std::string str) {
    int i = 0;
    int n = str.size();

    for (i = 0; i < n; i++) {
        switch (str[i]) {
            case '<':
                if ((i > 0) && (str[i - 1] == '>'))
                    return false;
                break;

            case '>':
                if ((i > 0) && (str[i - 1] == '<'))
                    return false;
                break;
        }
    }

    return true;
}

int main() {
    int count = -1;
    
    // Check the bracketing
    assert(not (correct_bracketing("<><><<><>><>>><>")));

    std::cout << "Bracketing is correct.\n";
    
    return 0;
}