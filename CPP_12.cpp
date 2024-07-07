if(strings.empty()) {
    return "";
} else {
    string longestSoFar = strings[0];
    for(string s : strings) {
        if(s.length() > longestSoFar.length()) {
            longestSoFar = s;
        } else if(s.length() == longestSoFar.length()) {
            longestSoFar = s;
        }
    }
    return longestSoFar;
}