vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(int i=0; i<lst.size(); i++){
        string str = lst[i];
        int count = 0;
        for(int j=0; j<str.size(); j++){
            if((str[j]-'0')%2 != 0){
                count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(count) + "n the str" + to_string(i) + "ng " + to_string(i) + " of the " + to_string(i) + "nput.");
    }
    return result;
}