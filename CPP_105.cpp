#include <vector>
#include <string>

std::vector<std::string> by_length(const std::vector<int>& numbers) {
    std::vector<std::string> words;
    
    for (int number : numbers) {
        switch (number) {
            case 0:
                words.push_back("Zero");
                break;
            case 1:
                words.push_back("One");
                break;
            case 2:
                words.push_back("Two");
                break;
            case 3:
                words.push_back("Three");
                break;
            case 4:
                words.push_back("Four");
                break;
            case 5:
                words.push_back("Five");
                break;
            case 6:
                words.push_back("Six");
                break;
            case 7:
                words.push_back("Seven");
                break;
            case 8:
                words.push_back("Eight");
                break;
            case 9:
                words.push_back("Nine");
                break;
        }
    }
    
    return words;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::vector<int> intArray = {9, 4, 8};
    assert(issame(by_length(intArray), {"Nine", "Four", "Eight"}));
    
    return 0;
}