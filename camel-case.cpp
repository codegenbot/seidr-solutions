Here is the solution:

string camelCase(string str) {
    string result = "";
    int i = 0;
    while (i < str.size()) {
        if (str[i] == '-') {
            i++;
            continue;
        }
        if (str[i] == ' ') {
            while (str[i] == ' ') i++;
            result += str.substr(i, 1).toupper();
            result += str.substr(i + 1).substr(0, 1).toLowerCase();
            i++;
            while (i < str.size() && str[i] != ' ') i++;
        } else {
            if (result.size() == 0) {
                result = str.substr(i, 1).toupper();
                i++;
            } else {
                result += str.substr(i, 1);
                i++;
            }
        }
    }
    return result;
}