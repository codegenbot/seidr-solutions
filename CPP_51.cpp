```cpp
string str = "";
for (char c : text) {
    if (!strchr("aeiouAEIOU", tolower(c)))
        str += c;
}
return str;```