```
vector<string> by_length(vector<int> arr) {
    vector<string> result;
    map<int, string> m = {{1, "One"}, {2, "Two"}, {3, "Three"}, 
                          {4, "Four"}, {5, "Five"}, {6, "Six"}, 
                          {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
    for (int i : arr) {
        result.push_back(m.at(i));
    }
    
    return result;
}