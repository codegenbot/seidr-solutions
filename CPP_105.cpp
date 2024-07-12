```c++
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a == b)
        return true;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

std::vector<std::string> by_length(int num) {
    std::vector<std::string> result;
    
    switch (num) {
        case 1:
            result.push_back("One");
            break;
        case 2:
            result.push_back("Two");
            break;
        case 3:
            result.push_back("Three");
            break;
        case 4:
            result.push_back("Four");
            break;
        case 5:
            result.push_back("Five");
            break;
        case 6:
            result.push_back("Six");
            break;
        case 7:
            result.push_back("Seven");
            break;
        case 8:
            result.push_back("Eight");
            break;
        case 9:
            result.push_back("Nine");
            break;
    }
    
    return result;
}

int main() {
    int num1, num2;  
    std::vector<std::string> result;  

    std::cin >> num1 >> num2;

    if (num1 >= 1 && num1 <= 9) {
        for(int i = 0; i < 2; i++) {
            switch (i ? num2 : num1) {
                case 1:
                    result.push_back(i ? "One" : "One");
                    break;
                case 2:
                    result.push_back(i ? "Two" : "Two");
                    break;
                case 3:
                    result.push_back(i ? "Three" : "Three");
                    break;
                case 4:
                    result.push_back(i ? "Four" : "Four");
                    break;
                case 5:
                    result.push_back(i ? "Five" : "Five");
                    break;
                case 6:
                    result.push_back(i ? "Six" : "Six");
                    break;
                case 7:
                    result.push_back(i ? "Seven" : "Seven");
                    break;
                case 8:
                    result.push_back(i ? "Eight" : "Eight");
                    break;
                case 9:
                    result.push_back(i ? "Nine" : "Nine");
                    break;
            }
        }
    }

    std::vector<std::string> temp = by_length(num1);
    if (!issame(result, temp))
        return 1;

    std::reverse(result.begin(), result.end());
    
    for (const auto &word : result)
        std::cout << word << " ";
    return 0;
}