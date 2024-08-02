```cpp
#include <algorithm>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    vector<string> vec1 = {"apple", "banana", "cherry"};
    vector<string> vec2 = {"banana", "cherry", "date"};

    if (issame(filter_by_substring(vec1, "an"), filter_by_substring(vec2, "an"))) {
        cout << "The vectors are the same." << endl;
    } else {
        cout << "The vectors are not the same." << endl;
    }

    return 0;
}