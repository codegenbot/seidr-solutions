#include <vector>
#include <map>
#include <algorithm>

std::vector<std::string> sortStrings(std::vector<std::string> strVec) {
    std::sort(strVec.begin(), strVec.end());
    return strVec;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    assert(issame(sortStrings(by_length({9, 4, 8})), sortStrings({"Nine", "Eight", "Four"})));
    // rest of your code...
}