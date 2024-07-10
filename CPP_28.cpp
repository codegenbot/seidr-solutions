```cpp
#include <vector>
#include <string>

using namespace std;

std::string concatenate(vector<string> strings) {
    string result = "";
    for(string s : strings) {
        result += s;
    }
    return result;
}