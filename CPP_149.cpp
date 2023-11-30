vector<string> sorted_list_sum(vector<string> lst){
    vector<string> result;
    for(int i=0;i<lst.size();i++){
        if(lst[i].length() %2 == 0){ //check if string length is even
            result.push_back(lst[i]); //add even length string to result vector
        }
    }
    sort(result.begin(), result.end(), [](const string& a, const string& b){
        if(a.length() == b.length()){
            return a < b; //sort alphabetically if lengths are equal
        }
        return a.length() < b.length(); //sort by length
    });
    return result;
}