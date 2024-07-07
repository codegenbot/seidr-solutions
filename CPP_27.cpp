#include <algorithm>
#include <string>

std::string filp_case(std::string& str) {
    std::string result;
    if (str.empty()) {
        return result; 
    }
    auto first = str.begin();
    auto last = str.end();

    if (std::all_of(first, last, ::islower)) { 
        std::transform(first, last, std::back_inserter(result), ::toupper);
    } else if (std::all_of(first, last, ::isupper)) { 
        std::transform(first, last, std::back_inserter(result), ::tolower);
    } else {
        result = str; 
    }
    return result;
}