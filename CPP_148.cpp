#include <iostream>
#include <vector>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<std::string> a, b;

    std::cout << "Enter the two planets (separated by space): ";
    
    if (std::getline(std::cin, line)) {
        size_t first = 0, last;
        while ((last = line.find(' ')) != std::string::npos) {
            a.push_back(line.substr(first, last - first));
            first = last + 1;
        }
        a.push_back(line.substr(first));

        if (std::getline(std::cin, line)) {
            first = 0, last = 0;
            while ((last = line.find(' ')) != std::string::npos) {
                b.push_back(line.substr(first, last - first));
                first = last + 1;
            }
            b.push_back(line.substr(first));

            if (issame(a, b)) {
                std::cout << "The two planets are the same." << std::endl;
            } else {
                std::cout << "The two planets are different." << std::endl;
            }
        } else {
            std::cout << "Invalid input. Please enter a list of planets separated by spaces." << std::endl;
        }
    } else {
        std::cout << "Invalid input. Please enter a list of planets separated by spaces." << std::endl;
    }

    return 0;
}