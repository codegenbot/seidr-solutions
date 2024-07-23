vector<string> by_length(vector<int> arr) {
    vector<string> result;
    
    for (int i : arr) {
        string s = to_string(i);
        map<char, string> m = {{'1', "One"}, {'2', "Two"}, {'3', "Three"}, 
                                {'4', "Four"}, {'5', "Five"}, {'6', "Six"}, 
                                {'7', "Seven"}, {'8', "Eight"}, {'9', "Nine"}};
        result.push_back(m.at(s[0]));
    }
    
    return result;
}