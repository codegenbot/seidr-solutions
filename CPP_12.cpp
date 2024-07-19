if (strings.empty()) {
    return "None";
}

string longestStr = strings.front();
for (const string& str : strings) {
    if (str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)) {
        longestStr = str;
    }
}
return longestStr;