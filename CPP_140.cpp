#include <iostream>
#include <sstream>
#include <string>
#include <regex>

std::string fix_spaces(std::string s) {
    return std::regex_replace(s, std::regex(" +"), "_");
}