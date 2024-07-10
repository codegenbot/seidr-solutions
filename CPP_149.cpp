vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    
    // Remove strings with odd lengths from the input list and store them in 'result'
    for (const string& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    
    // Sort the 'result' vector by length of each word
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) { return a.length() < b.length(); });
    
    // If two words have the same length, sort alphabetically
    std::stable_partition(result.begin(), result.end(), 
        [len](const string& str) { return str.length() == len; });
    
    return result;
}