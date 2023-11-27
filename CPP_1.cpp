vector<string> separate_paren_groups(string paren_string){
    vector<string> result;
    string group = "";
    int count = 0;

    for (int i = 0; i < paren_string.length(); i++) {
        if (paren_string[i] == '(') {
            count++;
        } else if (paren_string[i] == ')') {
            count--;
        }

        group += paren_string[i];

        if (count == 0 && group != "") {
            result.push_back(group);
            group = "";
        }
    }

    return result;
}