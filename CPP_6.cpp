#include <cassert>
#include <vector>
#include <algorithm>
#include <string>

std::vector<int> parse_nested_parens(std::string paren_string, int max_depth = 0, int current_depth = 0);