vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(auto s : lst){
        int oddCount = 0;
        for(auto c : s){
            if((c - '0') % 2 != 0){
                oddCount++;
            }
        }
        string str = "the number of odd elements " + to_string(oddCount) + "n the str" + to_string(oddCount) + "ng " + s + " of the " + to_string(oddCount) + "nput.";
        result.push_back(str);
    }
    return result;
}