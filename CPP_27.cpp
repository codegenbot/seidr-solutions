```cpp
string flip_case(string str) {
    string result = "";
    for (char c : str) {
        if (isalpha(c)) {
            char temp = c;
            if (islower(temp))
                temp = toupper(temp);
            else
                temp = tolower(temp);
            result += temp;
        } else
            result += c;
    }
    return result;
}