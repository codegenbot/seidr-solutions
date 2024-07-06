```cpp
vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end(), 
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    bool issame(vector<string> a,vector<string>b){
        if(a.size() != b.size()) return false;
        for(int i=0; i<a.size(); i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    };
    // To fix this issue, you need to declare the `issame` function before using it and also implement the logic inside the function.
    // Here is a simple way to do it:
    
    // This function checks if two vectors of strings are the same by comparing their sizes and then each element in them..
    
    return result;
}