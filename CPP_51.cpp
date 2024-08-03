```
string str = "";
for (char c : text) {
    if (strchr("bcdfghjklmnpqrstvwxyz", tolower(c)) != nullptr)
        str += c;
}
return str;```