#include <iostream>
#include <vector>
#include <string>

using namespace std;

string concatenate(vector<string> strings){
    string result = "";
    for(string str : strings){
        result += str;
    }
    return result;
}