#include <vector>
#include <string>

int main() {
    vector<std::string> strings = {"xxx", "asd", "xxy", "john doe", "xxxxAAA", "xxx"};
    string prefix = "xxx";
    
    if (!issame(vector<string>(filter_by_prefix(strings, prefix)), vector<string>{prefix, "xxxAAA"})) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    
    return 0;
}