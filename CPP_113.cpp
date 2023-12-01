vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int oddCount = 0;
        for(int j=0; j<lst[i].size(); j++){
            if(lst[i][j] % 2 != 0){
                oddCount++;
            }
        }
        string str = "the number of odd elements in the string " + to_string(i+1) +  " of the input.";
        result.push_back(str);
    }
    return result;
}