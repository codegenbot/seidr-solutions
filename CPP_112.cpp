vector<string> reverse_delete(string s, string c) {
    vector<string> result;
    string temp = "";
    
    for (char ch : s) {
        bool found = false;
        for (char cc : c) {
            if (ch == cc) {
                found = true;
                break;
            }
        }
        
        if (!found) {
            temp += ch;
        }
    }
    
    string reversedTemp = temp;
    reverse(reversedTemp.begin(), reversedTemp.end());
    
    result.push_back(temp);
    result.push_back((temp == reversedTemp) ? "True" : "False");
    
    return result;
}