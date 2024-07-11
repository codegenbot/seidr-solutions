int countDigits(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            count++;
        }
    }
    return count;
}

string file_name_check(string file_name){
    int dotPos = file_name.find('.');
    if (dotPos == -1 || dotPos >= file_name.size() - 4)
        return "No";
    
    string beforeDot = file_name.substr(0, dotPos);
    string afterDot = file_name.substr(dotPos + 1);

    if (!isalpha(beforeDot[0]))
        return "No";

    int digitsInName = countDigits(file_name);
    if (digitsInName > 3)
        return "No";

    vector<string> validExtensions = {"txt", "exe", "dll"};
    if (find(validExtensions.begin(), validExtensions.end(), afterDot) == validExtensions.end())
        return "No";

    return "Yes";
}