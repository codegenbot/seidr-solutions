vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        int oddCount = 0;
        for(int j=0; j<lst[i].size(); j++){
            if((lst[i][j]-'0')%2 != 0){
                oddCount++;
            }
        }
        result.push_back("the number of odd elements " + to_string(oddCount) + "n the str" + to_string(i+1) + "ng " + to_string(i+1) + " of the " + to_string(i+1) + "nput.");
    }
    return result;
}