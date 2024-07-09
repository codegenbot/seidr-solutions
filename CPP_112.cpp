vector<string> reverse_delete(string s, string c) {
    string result = "";
    for (char& ch : s) {
        bool deleteChar = false;
        for (char& charC : c) {
            if (ch == charC) {
                deleteChar = true;
                break;
            }
        }
        if (!deleteChar)
            result += ch;
    }

    string reverseResult = "";
    for (int i = result.length() - 1; i >= 0; --i) {
        reverseResult += result[i];
    }

    vector<string> output;
    output.push_back(result);
    if (result == reverseResult)
        output.push_back("True");
    else
        output.push_back("False");

    return output;
}