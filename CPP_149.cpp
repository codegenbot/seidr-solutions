Here is the solution:

vector<string> sorted_list_sum(vector<string> lst) {
    // Sort the list of strings by length and then alphabetically
    sort(lst.begin(), lst.end(),
         [](const string& a, const string& b) {
             if (a.size() == b.size()) {
                 return a < b;
             } else {
                 return a.size() < b.size();
             }
         });
    
    // Create a new vector to store the filtered strings
    vector<string> result;
    
    // Iterate over the sorted list and add only even-length strings to the result
    for (const string& str : lst) {
        if (str.size() % 2 == 0) {
            result.push_back(str);
        }
    }
    
    return result;
}