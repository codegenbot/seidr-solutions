vector<string> by_length(vector<int> arr){
        vector<int> sorted;
        vector<string> result;
        map<int, string> numToString = {
            {1, "One"},
            {2, "Two"},
            {3, "Three"},
            {4, "Four"},
            {5, "Five"},
            {6, "Six"},
            {7, "Seven"},
            {8, "Eight"},
            {9, "Nine"}
        };

        for (int num : arr) {
            if (num >= 1 && num <= 9) {
                sorted.push_back(num);
            }
        }

        sort(sorted.begin(), sorted.end());
        reverse(sorted.begin(), sorted.end());

        for (int num : sorted) {
            result.push_back(numToString[num]);
        }

        return result;
    }