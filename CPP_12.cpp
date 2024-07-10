```cpp
vector<string>::iterator it = strings.begin();
for (vector<string>::iterator i = strings.begin(); i != strings.end(); ++i) {
    if (*i > *it) {
        it = i;
    }
}
return *it;