#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

std::vector<int> parse_nested_parens(std::string input){
    std::vector<int> result;
    int count = 0;
    for (char c : input) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count == 0) {
                result.push_back(0);
            }
        }
    }
    
    assert(result == std::vector<int>{4});

    return result;
}