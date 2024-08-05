#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

int totalChars(vector<string> lst) {
    int total = 0;
    for (string str : lst) {
        total += str.size();
    }
    return total;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    if (totalChars(lst1) < totalChars(lst2)) {
        return lst1;
    }
    return lst2;
}

bool issame(vector<string> a, vector<string> b);