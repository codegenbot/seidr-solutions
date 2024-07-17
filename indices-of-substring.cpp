```
vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    int i = 0; 
    while (i <= n - m) { 
        if (text.substr(i, m) == target) { 
            result.push_back(i); 
            i += 1; // Increment i by 1 for the next search
        }
        else {
            i++;
        }
    }

    return result;
}