vector<string> odd_count(vector<string> lst){
    vector<string> result;
    for (string str : lst) {
        int odd_count = 0;
        for(char c : str) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        string output = "the number of odd elements ";
        string num_str = to_string(odd_count);
        for (char c : num_str) {
            output += (char)(c + '0');
        }
        output += "n the str" + num_str + "ng " + to_string(odd_count) + " of the " + to_string(odd_count) + "nput.";
        result.push_back(output);
    }
    return result;
}