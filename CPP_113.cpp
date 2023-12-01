vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int count = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j] - '0') % 2 != 0){
                count++;
            }
        }
        string str = "the number of odd elements " + to_string(count) + "n the str" + to_string(i) + "ng " + to_string(i) + " of the " + to_string(i) + "nput.";
        result.push_back(str);
    }
    return result;
}