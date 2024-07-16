vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(auto str : lst){
        int odd_count = 0;
        for(auto ch : str){
            if((ch - '0') % 2 != 0){
                odd_count++;
            }
        }
        string res = "the number of odd elements " + to_string(odd_count) + "n the str" + to_string(odd_count) + "ng " + str + " of the " + to_string(odd_count) + "nput.";
        result.push_back(res);
    }
    return result;
}