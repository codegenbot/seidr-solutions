Here is the solution:

string longest(vector<string> strings) {
    if (strings.empty()) return "";
    string longestSoFar = strings[0];
    for (const auto& s : strings) {
        if (s.length() > longestSoFar.length()) {
            longestSoFar = s;
        } else if (s.length() == longestSoFar.length()) {
            longestSoFar = s;
        }
    }
    return longestSoFar;