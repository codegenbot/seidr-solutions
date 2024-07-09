```cpp
#include <iostream>
#include <vector>
#include <limits>

bool filter_integers(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == b.size()) && std::equal(a.begin(), a.end(), b.begin());
}

int main() { 
    int n;
    if (!(std::cin >> n)) {
        std::cerr << "Invalid input. Please enter an integer." << std::endl;
        return 1; 
    }

    std::vector<int> a, b;

    for(int i = 0; i < n; ++i) {
        int x;
        while (!(std::cin >> x)) {
            if (std::cin.fail()) {
                std::cerr << "Invalid input. Please enter an integer." << std::endl;
                std::cin.clear(); 
                while(std::cin.get() != '\n') {  // Read and discard rest of the line
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                std::cin >> x;  // Re-try to read an integer
            } else {
                a.push_back(x);
                break;
            }
        }
    }

    for(int i = 0; i < n; ++i) {
        int x;
        while (!(std::cin >> x)) {
            if (std::cin.fail()) {
                std::cerr << "Invalid input. Please enter an integer." << std::endl;
                std::cin.clear(); 
                while(std::cin.get() != '\n') {  // Read and discard rest of the line
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
                }
                std::cin >> x;  // Re-try to read an integer
            } else {
                b.push_back(x);
                break;
            }
        }
    }

    if (filter_integers(a, b))
        std::cout << "The two vectors are the same." << std::endl;
    else
        std::cout << "The two vectors are not the same." << std::endl;

    return 0;
}