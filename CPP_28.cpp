#include <vector>
#include <string>
#include <using namespace std>;

string concatenate(vector<string> strings){
    string result = "";
    for(string s : strings){
        result += s;
    }
    return result;
}