vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    vector<int> lps(m, 0); // Longest Prefix Suffix array
    int j = 0; 

    for (int i = 1; i < m; i++) { 
        while(j > 0 && target[i] != target[j]) 
            j = lps[j - 1]; 

        if(target[i] == target[j])
            j++; 

        lps[i] = j;

        if(i == m-1) 
            result.push_back(text.find(target));
    }

    for (int i = 0; i < n; i++) { 
        j = lps[m - 1]; 
        while(j > 0 && i + j >= m && text.substr(i, j) != target)
            j = lps[j-1]; 

        if(i + j == m) {
            result.push_back(i);
            i += j;
            j = lps[j - 1];
        }
    }

    return result;
}