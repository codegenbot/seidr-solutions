```cpp
bool cycpattern_check(string a, string b) {
    string str = a;
    for(int i = 0; i < str.length(); i++) {
        if(str.substr(i).compare(b) == 0)
            return true;
        str = str.substr(1) + str[0]; // rotate the string
    }
    return false;
}