#include <map>
#include <string>
#include <cassert>

using namespace std;

map<char, int> histogram(const string& str) {
    map<char, int> result;
    for (char c : str) {
        result[c]++;
    }
    return result;
}

auto result = histogram(string("a"));
if (result == map<char, int>{{'a', 1}}) {
    // Test passed
} else {
    // Test failed
}
return 0;