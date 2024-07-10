```
#include <vector>
#include <string>

std::string concatenate(std::vector<std::string> strings) {
    std::string result = "";
    for(std::string s : strings) {
        result += s;
    }
    return result;
}

int main() {
    vector<string> strs = {{"x"}, {"y"}, {"z"}, {"w"}, {"k"}};
    string concatenatedString = concatenate(strs);
    cout << "Concatenated String: " << concatenatedString << endl;
    return 0;
}