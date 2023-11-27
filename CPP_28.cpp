#include <string>
#include <vector>

using namespace std;

string concatenate(vector<string> strings);

string concatenate(vector<string> strings){
    string result = "";
    for(const string& s : strings){
        result += s;
    }
    return result;
}