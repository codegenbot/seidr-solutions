```cpp
#include <vector>
#include <string>

bool issame(vector<string> a,vector<string>b) {
    for(int i = 0; i<a.size();i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> strings;
    std::string s;
    for (int i = 0; i < n; ++i) {
        std::getline(std::cin, s); 
        strings.push_back(s);
    }

    std::string substring;
    std::getline(std::cin, substring);

    vector<string> result1 = filter_by_substring(strings, substring);

    if (issame(result1, strings)) {
        for (const auto& s : strings) {
            std::cout << s << std::endl;
        }
    } else {
        std::cout << "No common elements found." << std::endl;
    }

    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}