vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string str : lst){
        int oddCount = 0;
        for(char c : str){
            if((c - '0') % 2 != 0){
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + to_string(oddCount) + "n the str" + to_string(result.size() + 1) + "ng " + to_string(result.size() + 1) + " of the " + to_string(result.size() + 1) + "nput.");
    }
    return result;
}