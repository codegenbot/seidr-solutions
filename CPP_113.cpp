vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j] - '0') % 2 == 1){
                count++;
            }
        }
        string str = "the number of odd elements in the string " + to_string(i+1) + " of the input.";
        result.push_back(str);
    }
    return result;
}