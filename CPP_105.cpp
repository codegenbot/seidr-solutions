#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

std::vector<std::vector<std::string>> by_length(std::vector<int> arr) {
    std::vector<std::vector<std::string>> result;
    
    for (int i : arr) {
        if (i >= 1 && i <= 9) {
            std::vector<std::string> temp;
            
            switch (i) {
                case 1:
                    temp.push_back("One");
                    break;
                case 2:
                    temp.push_back("Two");
                    break;
                case 3:
                    temp.push_back("Three");
                    break;
                case 4:
                    temp.push_back("Four");
                    break;
                case 5:
                    temp.push_back("Five");
                    break;
                case 6:
                    temp.push_back("Six");
                    break;
                case 7:
                    temp.push_back("Seven");
                    break;
                case 8:
                    temp.push_back("Eight");
                    break;
                case 9:
                    temp.push_back("Nine");
                    break;
            }
            
            result.push_back(temp);
        }
    }
    
    return result;
}

int main() {
    assert(issame(by_length({9, 4, 8}) , {{"Nine"}, {"Four", "Eight"}}));
    // More assertions...
}