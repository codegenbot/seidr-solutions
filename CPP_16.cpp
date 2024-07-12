int count_distinct_characters(string str) { 
    string temp = str; 
    for (char &c : temp) 
        c = tolower(c); 
    vector<char> v(temp.begin(), temp.end()); 
    sort(v.begin(), v.end()); 
    int distinct = 1; 
    for (int i = 1; i < v.size(); ++i) { 
        if (v[i] != v[i - 1]) 
            distinct++; 
    } 
    return distinct;
}