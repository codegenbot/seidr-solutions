#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string concatenate(vector<string> strings){
    string result;
    for(const string& s : strings){
        result += s;
    }
    return result;
}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
}