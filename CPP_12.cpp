using namespace std;

string longest(vector<string> strings) {
    if(strings.empty()) return "";
    string strng = strings[0];
    for(auto str : strings){
        if(str.length() > strng.length()){
            strng = str;
        }
        else if(str.length() == strng.length()){
            strng = str;
        }
    }
    return strng;
}