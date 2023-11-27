vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(auto str : lst){
        int oddCount = 0;
        for(auto ch : str){
            if(ch % 2 == 1){
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + to_string(oddCount) + "n the str" + to_string(oddCount) + "ng " + str + " of the " + to_string(oddCount) + "nput.");
    }
    return result;
}