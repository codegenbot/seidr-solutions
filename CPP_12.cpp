if(strings.empty()) {
        return "None";
    }
    string longestString = strings[0];
    for(string s : strings) {
        if(s.length() > longestString.length() || (s.length() == longestString.length() && s < longestString)) {
            longestString = s;
        }
    }
    return longestString;
}