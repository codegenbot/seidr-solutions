#include <vector>
#include <string>
#include <cassert> // To use assert
#include "path_to_correct_directory/utility_functions.h" // Include header with parse_nested_parens function

bool issame(std::vector<int> a, std::vector<int> b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(parse_nested_parens("(()(())((())))"), {4}));
}