#include <string>
#include <vector>
#include <iostream>

using namespace std;

string concatenate(vector<string> strings){
    string result;
    for(const string& s : strings){
        result += s;
    }
    
    if (result == "xyzwk") {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }
    
    return result;
}