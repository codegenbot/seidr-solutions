#include <vector>
#include <string>

bool issame(std::vector<std::string> vec1, std::vector<std::string> vec2) {
    if (vec1.size() != vec2.size())
        return false;
    for (int i = 0; i < vec1.size(); i++) {
        if (vec1[i] != vec2[i])
            return false;
    }
    return true;
}

std::vector<std::string> byLength(int num) {
    std::vector<std::string> result;

    switch (num % 100) {
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
        default:
            if (num % 10 == 1)
                result.push_back("One");
            else if (num % 10 == 2)
                result.push_back("Two");
            else if (num % 10 == 3)
                result.push_back("Three");
            else if (num % 10 == 4)
                result.push_back("Four");
            else if (num % 10 == 5)
                result.push_back("Five");
            else if (num % 10 == 6)
                result.push_back("Six");
            else if (num % 10 == 7)
                result.push_back("Seven");
            else if (num % 10 == 8)
                result.push_back("Eight");
            else
                result.push_back("Nine");
    }

    switch (num / 100) {
        case 1:
            result.push_back("Hundred");
            break;
        case 2:
            result.insert(result.begin(), "Two Hundred");
            return result;
        default:
            if (num / 100 == 0)
                ; // do nothing
            else if (num / 100 == 1)
                result.push_back("One Hundred");
            else
                result.insert(result.begin(), std::to_string(num / 100) + " Hundred");
    }

    return result;
}

int main() {
    int num = 984;  
    std::vector<std::string> result1 = byLength(num);
    
    std::vector<std::string> a = {"Nine", "Eight", "Four"};
    std::assert(issame(result1 , a)); // Corrected assert statement
    
    return 0;
}