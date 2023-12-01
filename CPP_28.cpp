#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

string concatenate(vector<string> strings);

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    return 0;
}

string concatenate(vector<string> strings){
    return accumulate(strings.begin(), strings.end(), string());
}