```cpp
#include <iostream>
#include <vector>
#include <limits>

bool checkVectorEquality(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        while (!(std::cin >> a[i])) {
            std::cout << "Invalid input. Please enter an integer: ";
            char c;
            while ((c = std::cin.peek()) != '\n' && !std::isspace(c)) {
                std::cin.clear();
                if (!(std::cin >> c)) {
                    break;
                }
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        while (!(std::cin >> b[i])) {
            std::cout << "Invalid input. Please enter an integer: ";
            char c;
            while ((c = std::cin.peek()) != '\n' && !std::isspace(c)) {
                std::cin.clear();
                if (!(std::cin >> c)) {
                    break;
                }
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    while (!(std::cin >> n)) {
        std::cout << "Invalid input. Please enter an integer: ";
        char c;
        while ((c = std::cin.peek()) != '\n' && !std::isspace(c)) {
            std::cin.clear();
            if (!(std::cin >> c)) {
                break;
            }
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::vector<int> vec1;
    for(int i = 0; i < n; i++) {
        int x;
        while (!(std::cin >> x)) {
            std::cout << "Invalid input. Please enter an integer: ";
            char c;
            while ((c = std::cin.peek()) != '\n' && !std::isspace(c)) {
                std::cin.clear();
                if (!(std::cin >> c)) {
                    break;
                }
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        vec1.push_back(x); 
    }

    std::vector<int> vec2;
    for(int i = 0; i < n; i++) {
        int x;
        while (!(std::cin >> x)) {
            std::cout << "Invalid input. Please enter an integer: ";
            char c;
            while ((c = std::cin.peek()) != '\n' && !std::isspace(c)) {
                std::cin.clear();
                if (!(std::cin >> c)) {
                    break;
                }
            }
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        vec2.push_back(x); 
    }

    bool checkEquality = checkVectorEquality(vec1, vec2);

    if(checkEquality) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }

    return 0;
}