#include <iostream>
#include <vector>
#include <limits>

bool checkVectorEquality(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
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
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::vector<int> vec1;
    int size = 0;
    while (size < n) {
        int x;
        while (true) {
            if (!(std::cin >> x)) {
                std::cout << "Invalid input. Please enter an integer: ";
                char ch;
                while((ch = std::getchar()) != '\n' && ch != EOF) {
                    if(ch == '-') continue; // Ignore negative sign
                }
            } else {
                vec1.push_back(x); 
                size++;
                if(size >= n) break;  
            }
        }
    }

    std::vector<int> vec2;
    size = 0;
    while (size < n) {
        int x;
        while (true) {
            if (!(std::cin >> x)) {
                std::cout << "Invalid input. Please enter an integer: ";
                char ch;
                while((ch = std::getchar()) != '\n' && ch != EOF) {
                    if(ch == '-') continue; // Ignore negative sign
                }
            } else {
                vec2.push_back(x); 
                size++;
                if(size >= n) break;  
            }
        }
    }

    bool checkEquality = checkVectorEquality(vec1, vec2);

    if(checkEquality) {
        std::cout << "The two vectors are the same." << std::endl;
    } else {
        std::cout << "The two vectors are not the same." << std::endl;
    }

    return 0;
}