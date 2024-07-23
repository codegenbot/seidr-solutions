vector<string> odd_count(vector<string> lst){
    vector<string> res;
    for(auto &s : lst){
        int count = 0;
        for(auto &c : s){
            if((c - '0') % 2 == 1){
                count++;
            }
        }
        string odd_str = "the number of odd elements " + to_string(count) + "n the str" + to_string(count) + "ng " + s + " of the " + to_string(count) + "nput.";
        res.push_back(odd_str);
    }
    return res;
}