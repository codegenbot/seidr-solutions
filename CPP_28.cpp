#include <string>
#include <vector>
#include <iostream>

using namespace std;

string concatenate(vector<string> strings){
    string result;
    for(const string& s : strings){
        result += s;
    }
    return result;
}

int main() {
    if (concatenate({"x", "y", "z", "w", "k"}) == "xyzwk") {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    
    return 0;
}