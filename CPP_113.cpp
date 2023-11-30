vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j]-'0') % 2 != 0){
                count++;
            }
        }
        string str = "the number of odd elements ";
        str += to_string(count);
        str += "n the str";
        str += to_string(i+1);
        str += "ng ";
        str += to_string(i+1);
        str += " of the ";
        str += to_string(i+1);
        str += "nput.";
        result.push_back(str);
    }
    return result;
}