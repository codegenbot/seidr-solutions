vector<int> count_odd_digits(string str){
    vector<int> result;
    for(char c : str){
        if((c - '0') % 2 != 0){
            result.push_back(c - '0');
        }
    }
    return result;
}

vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for(string str : lst){
        vector<int> odd_digits = count_odd_digits(str);
        result.push_back("the number of odd elements " + to_string(odd_digits.size()) + "n the str" + to_string(str.size()) + "ng " + to_string(str) + " of the " + to_string(lst.size()) + "nput.");
    }
    return result;
}