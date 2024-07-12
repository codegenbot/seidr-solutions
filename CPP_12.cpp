#include <string>
#include <vector>

using namespace std;

string longest(vector<string> strings){
    if(strings.empty()) return "";
    string result = strings[0];
    for(auto str: strings){
        if(str.length() > result.length())
            result = str;
    }
    return result;
}

int main(){
    vector<string> v={"x", "yyy", "zzzz", "www", "kkkk", "abc"};
    cout << longest(v) << endl;
    return 0;
}