vector<string> reverse_delete(string s, string c) {
    vector<string> result;

    for (char& ch : s) {
        bool found = false;
        for (char& cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(string(1, ch));
        }
    }

    string resStr = "";
    for (string str : result) {
        resStr += str;
    }

    bool isPalindrome = false;
    int left = 0, right = resStr.length() - 1;
    while (left < right) {
        if (resStr[left] != resStr[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }

    return result;
}
bool issame(vector<string> a,vector<string>b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}