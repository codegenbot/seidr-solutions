#include <bits/stdc++.h>
using namespace std;

string concatenate(vector<string> strings){
    string result = "";
    for (const auto &s : strings) {
        result += s;
    }
    return result;
}

int main() {
   assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
}