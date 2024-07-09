while ((pos = str.find(sep)) != string::npos) {
    tokens.push_back(str.substr(0, pos));
    string temp = str;
    temp.erase(0, pos + 1);
    str = temp.substr(pos + 1);
}