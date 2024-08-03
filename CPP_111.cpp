#include <map>
#include <string>
#include <sstream>
#include <algorithm>
#include <cassert>

bool issame(std::map<char, int> a, std::map<char, int> b);

std::map<char, int> histogram(std::string test);

bool issame(std::map<char, int> a, std::map<char, int> b){
    return a == b;
}