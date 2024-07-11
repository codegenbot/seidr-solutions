```
using namespace std;

string longest(vector<string> strings){
    if(strings.empty()) return "";
    string res = strings[0];
    for(auto s : strings) {
        if(s.length() > res.length())
            res = s;
        else if(s.length() == res.length())
            res = s; // This is to handle the case where multiple strings have the same length
    }
    return res;
}