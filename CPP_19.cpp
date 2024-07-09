map<string,int> num_map = {{"zero",0},{"one",1},{"two",2},{"three",3},{"four",4},{"five",5},
                             {"six",6},{"seven",7},{"eight",8},{"nine",9}};

string sort_numbers(string numbers){
    istringstream iss(numbers);
    vector<string> num_list;
    string temp;
    
    while(iss >> temp)
        num_list.push_back(temp);

    sort(num_list.begin(),num_list.end());
    return join(num_list," ");
}

string join(vector<string>& v, const char* s) {
    ostringstream oss;
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (it != v.begin())
            oss << s;
        oss << *it;
    }
    return oss.str();
}