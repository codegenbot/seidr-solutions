#include <string>
#include <cassert>
using namespace std;

std::string string_xor(const std::string &a, const std::string &b) {
    assert(a.size() == b.size());
    
    std::string result = "";
    for (int i = 0; i < a.size(); i++) {
        result.push_back((a[i] == b[i]) ? '0' : '1');
    }
    return result;
}

std::string compareStrings(const std::string &a, const std::string &b) {
    assert(a.size() == b.size());
    
    std::string result = string_xor(a, b);
    
    return result;
}