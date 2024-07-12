#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    std::vector<std::string> b;
    return a == b;
}

int main() {
    int num1, num2;  
    std::vector<std::string> result;  

    std::cin >> num1 >> num2;

    if (num1 >= 1 && num1 <= 9) {
        switch (num1) {
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
    }

    if (num2 >= 1 && num2 <= 9) {
        switch (num2) {
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
    }

    std::reverse(result.begin(), result.end());
    
    return 0;
}