vector<string> by_length(vector<int> arr){
        vector<string> res;
        map<int, string> intToString = {{1,"One"}, {2,"Two"}, {3,"Three"}, {4,"Four"}, {5,"Five"}, {6,"Six"}, {7,"Seven"}, {8,"Eight"}, {9,"Nine"}};
        
        sort(arr.begin(), arr.end());
        auto it = remove_if(arr.begin(), arr.end(), [](int n) { return n < 1 || n > 9; });
        arr.erase(it, arr.end());
        
        reverse(arr.begin(), arr.end());
        
        for (int num : arr) {
            res.push_back(intToString[num]);
        }
        
        return res;
    }