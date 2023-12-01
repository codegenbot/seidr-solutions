vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j]-'0') % 2 != 0){
                count++;
            }
        }
        string res = "the number of odd elements ";
        res += to_string(count);
        res += "n the str";
        res += to_string(i+1);
        res += "ng ";
        res += to_string(i+1);
        res += " of the ";
        res += to_string(i+1);
        res += "nput.";
        result.push_back(res);
    }
    return result;
}