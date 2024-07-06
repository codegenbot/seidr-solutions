#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string>, vector<string>) {
    // Your implementation here
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> vec1, vec2;

    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, str);
        if (i == 0)
            vec1.push_back(str);
        else
            vec2.push_back(str);
    }

    // Your implementation here

    return 0;
}