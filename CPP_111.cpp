#include <iostream>
#include <map>
#include <cassert>

map<char,int> histogram(string test);

bool issame(const map<char,int>& a, const map<char,int>& b){
    return a == b;
}