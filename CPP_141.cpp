int countDigits(string s) {
    int count = 0;
    for(char c : s) {
        if(isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name) {
    if(file_name.find('.') == string::npos) return "No";
    int dotPos = file_name.find('.');
    string nameBeforeDot = file_name.substr(0, dotPos);
    string nameAfterDot = file_name.substr(dotPos + 1);

    if(countDigits(nameBeforeDot) > 3) return "No";

    if(nameBeforeDot.empty() || !isalpha(nameBeforeDot[0])) return "No";

    if(nameAfterDot != "txt" && nameAfterDot != "exe" && nameAfterDot != "dll") return "No";

    return "Yes";
}