#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <vector>
#include <string>

std::vector<std::string> filter_by_substring(std::vector<std::string> vec, std::string sub);
bool issame(std::vector<std::string> v1, std::vector<std::string> v2);

#endif // FUNCTIONS_H

#include "functions.h"  // Include the header file
#include <iostream>
#include <cassert>

int main() {
    assert(issame(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run"), {"grunt", "prune"}));
    return 0;
}