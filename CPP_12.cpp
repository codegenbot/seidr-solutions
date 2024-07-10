Here is the completed code:

```cpp
string longest(vector<string> strings){
    if(strings.empty())
        return "";
    string max = strings[0];
    for(string s: strings)
        if(s.length() > max.length()) max = s;
    return max;
}