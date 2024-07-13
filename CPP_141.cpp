Here is the completed code:

string file_name_check(string file_name) {
    int digitCount = 0;
    bool foundDot = false;
    
    for (char c : file_name) {
        if (isdigit(c)) {
            digitCount++;
        } else if (c == '.') {
            foundDot = true;
        } else if (!foundDot && !isalpha(c)) {
            return "No";
        }
    }
    
    string extension = "";
    for (int i = file_name.find('.') + 1; i < file_name.size(); i++) {
        extension += file_name[i];
    }
    
    vector<string> validExtensions = {"txt", "exe", "dll"};
    if (find(validExtensions.begin(), validExtensions.end(), extension) == validExtensions.end()) {
        return "No";
    }
    
    return digitCount > 3 ? "No" : "Yes";
}