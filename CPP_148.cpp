#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<string> bf(string str1, string str2){
    vector<string> result;
    result.push_back(str1);
    result.push_back(str2);
    return result;
}

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert(issame(bf("Jupiter", "Makemake"), vector<string>()));
    return 0;
}