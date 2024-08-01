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
    int n;
    std::cin >> n;
    
    std::vector<std::string> strings(n);
    for(int i = 0; i < n; i++) {
        std::cin >> strings[i];
    }

    std::string prefix;
    std::cin >> prefix;

    std::vector<std::string> filtered_strings = filter_by_prefix(strings, prefix);

    if (issame(strings, filtered_strings)) {
        std::cout << "All strings start with the given prefix." << std::endl;
    } else {
        std::cout << "Not all strings start with the given prefix." << std::endl;
    }

    return 0;
}