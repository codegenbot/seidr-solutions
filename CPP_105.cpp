#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) 
            return false;
    return true;
}

std::vector<std::string> by_length(const std::vector<int>& arr) {
    std::vector<std::string> result;
    for (int num : arr) {
        int length = to_string(num).size();
        result.push_back(to_string(length));
    }
    return result;
}

int main_test() {
    std::vector<int> intArray;
    std::cout << "Enter the numbers separated by space: ";
    for (std::string str; std::getline(std::cin, str); ) {
        intArray.push_back(stoi(str));
    }
    
    std::vector<std::string> lengthArr = by_length(intArray);
    std::vector<std::string> b;
    b = by_length({518, 5, 10});
    assert(issame(lengthArr, b));
    return 0;
}