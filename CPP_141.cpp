bool containsDigit(char c) {
    return c >= '0' && c <= '9';
}

int main() {
    // test your function here
    return 0;
}
string file_name_check(string file_name){
    bool hasDot = false, hasMoreThanThreeDigits = false;
    int digitCount = 0;
    for(int i=0; i<file_name.length(); i++){
        char c = file_name[i];
        if(c == '.')
            hasDot = true;
        else if(containsDigit(c))
            {
                digitCount++;
                if(digitCount > 3)
                    hasMoreThanThreeDigits = true;
            }
        else if((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
            return "No";
    }
    if(!hasDot || digitCount > 3 || !hasDot || file_name.length() - file_name.find('.') <= 4)
        return "No";
    string ext = file_name.substr(file_name.find('.') + 1);
    for(string s: {"txt", "exe", "dll"})
        if(s == ext)
            return "Yes";
    return "No";
}