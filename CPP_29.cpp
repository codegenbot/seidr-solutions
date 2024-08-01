```cpp
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> inputStrings = {"apple", "banana", "apricot", "appetizer", "orange"};
    string prefix = "app";
    
    vector<string> filteredStrings = filter_by_prefix(inputStrings, prefix);

    if (issame(filteredStrings, {"apple", "apricot", "appetizer"})) {
        cout << "Filtered strings are same as expected." << endl;
    } else {
        cout << "Filtered strings do not match the expected result." << endl;
    }
    
    return 0;
}