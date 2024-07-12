#include <vector>
#include <string>

bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
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
        result = byLength(num1);
        for(int i = 0; i < 2; i++) {
            switch (i ? num2 : num1) {
                case 1:
                    if(i) result.push_back("One");
                    else result.push_back("One");
                    break;
                case 2:
                    if(i) result.push_back("Two");
                    else result.push_back("Two");
                    break;
                case 3:
                    if(i) result.push_back("Three");
                    else result.push_back("Three");
                    break;
                case 4:
                    if(i) result.push_back("Four");
                    else result.push_back("Four");
                    break;
                case 5:
                    if(i) result.push_back("Five");
                    else result.push_back("Five");
                    break;
                case 6:
                    if(i) result.push_back("Six");
                    else result.push_back("Six");
                    break;
                case 7:
                    if(i) result.push_back("Seven");
                    else result.push_back("Seven");
                    break;
                case 8:
                    if(i) result.push_back("Eight");
                    else result.push_back("Eight");
                    break;
                case 9:
                    if(i) result.push_back("Nine");
                    else result.push_back("Nine");
                    break;
            }
        }
    }

    std::vector<std::string> temp = byLength(num2);
    while(!isSame(result, temp)) {
        for(int i = 0; i < 2; i++) {
            switch (i ? num1 : num2) {
                case 1:
                    if(i) result.push_back("One");
                    else result.push_back("One");
                    break;
                case 2:
                    if(i) result.push_back("Two");
                    else result.push_back("Two");
                    break;
                case 3:
                    if(i) result.push_back("Three");
                    else result.push_back("Three");
                    break;
                case 4:
                    if(i) result.push_back("Four");
                    else result.push_back("Four");
                    break;
                case 5:
                    if(i) result.push_back("Five");
                    else result.push_back("Five");
                    break;
                case 6:
                    if(i) result.push_back("Six");
                    else result.push_back("Six");
                    break;
                case 7:
                    if(i) result.push_back("Seven");
                    else result.push_back("Seven");
                    break;
                case 8:
                    if(i) result.push_back("Eight");
                    else result.push_back("Eight");
                    break;
                case 9:
                    if(i) result.push_back("Nine");
                    else result.push_back("Nine");
                    break;
            }
        }
    }

    std::reverse(result.begin(), result.end());
    
    return 0;
}