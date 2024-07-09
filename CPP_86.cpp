``` 
size_t pos = 0;
while ((pos = str.find(sep)) != string::npos) {
    tokens.push_back(str.substr(0, pos));
    str = str.substr(pos + 1);
}
tokens.push_back(str);