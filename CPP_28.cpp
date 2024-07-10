#include <vector>
#include <string>

std::string concatenate(vector<string> strings) {
    std::string result = "";
    for(string s : strings) {
        result += s;
    }
    return result;
}

int main() {
    vector<string> strings = {{"x"}, {"y"}, {"z"}, {"w"}, {"k"}};
    std::cout << concatenate(strings) << endl;
    return 0;
}