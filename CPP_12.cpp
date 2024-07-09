Here is the solution:

```cpp
string longest(vector<string> strings){
    if(strings.empty()) return "";
    string max = strings[0];
    for(auto str : strings) {
        if(str.length() > max.length())
            max = str;
    }
    return max;
}