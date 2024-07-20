if(strings.empty()) return "";
string result = *strings.begin();
for(string s : strings){
    if(s.length() > result.length())
        result = s;
}
return result;