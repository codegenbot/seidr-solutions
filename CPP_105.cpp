vector<string> by_length(vector<int> arr){
    vector<string> result;
    vector<int> temp;
    for(int num : arr){
        if(num >= 1 && num <= 9){
            temp.push_back(num);
        }
    }
    sort(temp.begin(), temp.end());
    reverse(temp.begin(), temp.end());
    map<int, string> dict = {
        {1, "One"}, {2, "Two"}, {3, "Three"}, {4, "Four"},
        {5, "Five"}, {6, "Six"}, {7, "Seven"}, {8, "Eight"}, {9, "Nine"}
    };
    for(int num : temp){
        result.push_back(dict[num]);
    }
    return result;
}