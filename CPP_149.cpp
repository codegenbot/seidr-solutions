vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    for (const string& str : lst) {
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
        for(int i=0; i<a.size();i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    }

    // Use the issame function to compare the input list with the result
    // You might want to check some condition before calling this function

    return result;
}