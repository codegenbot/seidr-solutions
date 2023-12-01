string match_parens(vector<string> lst){

    int count = 0;

    for (string str : lst) {
        for (char c : str) {
            if (c == '(') {
                count++;
            } else {
                count--;
            }
        }
    }

    return (count == 0) ? "Yes" : "No";
}