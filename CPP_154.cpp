#include <iostream>
#include <string>

bool cycpattern_check(const std::string& a, const std::string& b) {
    int n = a.size();
    int m = b.size();
    if(n != m) return false;
    std::string new_a = a;
    new_a.append(a);
    return new_a.find(b) != std::string::npos;
}

cycpattern_check("winemtt", "tinem");
cycpattern_check("abcdef", "defabc");
cycpattern_check("hellohello", "hello");
cycpattern_check("software", "soft");
cycpattern_check("programming", "ingpro");