vector<string> by_length(vector<int> arr){
        map<int, string> numMap = {{1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}};
        vector<string> res;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] >= 1 && arr[i] <= 9) {
                res.push_back(numMap[arr[i]]);
            }
        }
        
        sort(res.begin(), res.end());
        reverse(res.begin(), res.end());
        
        return res;
    }