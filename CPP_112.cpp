vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string resString = "";
    bool isPalindrome = true;

    for (int i = 0; i < s.length(); i++) {
        if (c.find(s[i]) == string::npos) {
            resString += s[i];
        }
    }

    int left = 0;
    int right = resString.length() - 1;

    while (left < right) {
        if (resString[left] != resString[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    result.push_back(resString);

    if (isPalindrome) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }

    return result;
}