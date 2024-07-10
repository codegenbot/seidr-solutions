Here is the completed code:

vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    
    for (char ch : s) {
        bool deleteChar = false;
        for (char cc : c) {
            if (ch == cc) {
                deleteChar = true;
                break;
            }
        }
        
        if (!deleteChar) {
            result.push_back(string(1, ch));
        }
    }
    
    string resultStr = "";
    for (int i = 0; i < result.size(); i++) {
        resultStr += result[i];
    }
    
    string revResultStr = resultStr;
    reverse(revResultStr.begin(), revResultStr.end());
    
    if (resultStr == revResultStr) {
        result.push_back("True");
    } else {
        result.push_back("False");
    }
    
    return result;
}