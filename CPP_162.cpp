#include <algorithm>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <memory>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <unordered>
#include <vector>

std::string string_to_md5(const std::string& str) {
    std::string output = "";
    for(int i = 0; i < str.length(); i++) {
        char c = str[i];
        int ascii_val = (int)c;
        int val = ascii_val ^ (i % 255);
        sprintf(&output[4*i], "%02x", val);
    }
    return output;
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}