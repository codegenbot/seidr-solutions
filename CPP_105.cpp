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
    }

    return result;
}

int main() {
    int num = 984;  
    std::vector<std::string> result1 = byLength(num);
    
    if (issame({"One", "Nine", "Four"}, result1))
        return 0;
    else
        return 1;
}