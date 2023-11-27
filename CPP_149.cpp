vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    
    // Iterate through each string in the input vector
    for(const string& s : lst) {
        // Check if the length of the string is even
        if(s.size() % 2 == 0) {
            // If even, add it to the result vector
            result.push_back(s);
        }
    }
    
    // Sort the result vector in ascending order by length and alphabetically
    sort(result.begin(), result.end(), [](const string& s1, const string& s2){
        if(s1.size() == s2.size()) {
            return s1 < s2;
        }
        return s1.size() < s2.size();
    });
    
    return result;
}