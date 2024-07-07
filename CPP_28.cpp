#include <iostream>
#include <vector>
#include <string>

using namespace std;

string concatenate(vector<string> strings){
    string result = "";
    for (auto str : strings) {
        result += str;
    }
    return result;
}

int main() {
    assert(concatenate({"x", "y", "z", "w", "k"}) == "xyzwk");
    cout << "Code compiled and run successfully." << endl;
    return 0;
}