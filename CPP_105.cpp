```cpp
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
    std::vector<std::string> result = by_length(num1), temp;
    
    std::cin >> num1 >> num2;

    if (num1 >= 1 && num1 <= 9) {
        for(int i = 0; i < 2; i++) {
            switch (i ? num2 : num1) {
                case 1:
                    temp.push_back(i ? "One" : "One");
                    break;
                case 2:
                    temp.push_back(i ? "Two" : "Two");
                    break;
                case 3:
                    temp.push_back(i ? "Three" : "Three");
                    break;
                case 4:
                    temp.push_back(i ? "Four" : "Four");
                    break;
                case 5:
                    temp.push_back(i ? "Five" : "Five");
                    break;
                case 6:
                    temp.push_back(i ? "Six" : "Six");
                    break;
                case 7:
                    temp.push_back(i ? "Seven" : "Seven");
                    break;
                case 8:
                    temp.push_back(i ? "Eight" : "Eight");
                    break;
                case 9:
                    temp.push_back(i ? "Nine" : "Nine");
                    break;
            }
        }
    }

    if(issame(by_length(num1), by_length(num2))) {
        result = temp; 
    }else{
        result = by_length((num1 < num2)? num1 : num2); 
    }
    
    std::vector<std::string> final_result;
    for (int i = 0; i < 2; i++) {
        switch (i ? num2 : num1) {
            case 1:
                final_result.push_back(i ? "One" : "One");
                break;
            case 2:
                final_result.push_back(i ? "Two" : "Two");
                break;
            case 3:
                final_result.push_back(i ? "Three" : "Three");
                break;
            case 4:
                final_result.push_back(i ? "Four" : "Four");
                break;
            case 5:
                final_result.push_back(i ? "Five" : "Five");
                break;
            case 6:
                final_result.push_back(i ? "Six" : "Six");
                break;
            case 7:
                final_result.push_back(i ? "Seven" : "Seven");
                break;
            case 8:
                final_result.push_back(i ? "Eight" : "Eight");
                break;
            case 9:
                final_result.push_back(i ? "Nine" : "Nine");
                break;
        }
    }
    
    std::reverse(final_result.begin(), final_result.end());
    
    for (std::string &s : final_result) {
        if (s == "One") {
            s = "1";
        } else if (s == "Two") {
            s = "2";
        } else if (s == "Three") {
            s = "3";
        } else if (s == "Four") {
            s = "4";
        } else if (s == "Five") {
            s = "5";
        } else if (s == "Six") {
            s = "6";
        } else if (s == "Seven") {
            s = "7";
        } else if (s == "Eight") {
            s = "8";
        } else if (s == "Nine") {
            s = "9";
        }
    }
    
    for (std::string &s : final_result) {
        if (s == "1" || s == "2" || s == "3" || s == "4" || s == "5" || s == "6" || s == "7" || s == "8" || s == "9") {
            std::cout << s << " ";
        } else {
            std::cout << s << "\n";
        }
    }
    
    return 0;
}