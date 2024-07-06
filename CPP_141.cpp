bool hasDigit(char c) {
    return c >= '0' && c <= '9';
}

int main() {
    // Your test cases here
    return 0;
}
string file_name_check(string file_name){
    int digitCount = 0, dotCount = 0;
    for(int i = 0; i < file_name.length(); i++) {
        if(hasDigit(file_name[i])) {
            digitCount++;
        } else if (file_name[i] == '.') {
            dotCount++;
        }
    }
    if(digitCount > 3 || dotCount != 1) return "No";
    string beforeDot = "";
    for(int i = 0; i < file_name.length(); i++) {
        if(file_name[i] == '.') break;
        beforeDot += file_name[i];
    }
    if(beforeDot.empty() || !isalpha(beforeDot[0])) return "No";
    string afterDot = file_name.substr(file_name.find('.') + 1);
    vector<string> validExtensions = {"txt", "exe", "dll"};
    if(find(validExtensions.begin(), validExtensions.end(), afterDot) == validExtensions.end()) return "No";
    return "Yes";
}