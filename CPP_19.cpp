map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, 
                                {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    map<int, string> num_map_rev;
    for(auto &elem : num_map)
        num_map_rev[elem.second] = elem.first;

    string result;
    for(auto &elem : num_map_rev) {
        size_t found = numbers.find(elem.second);
        while(found != string::npos) {
            result += elem.second + " ";
            numbers.replace(found, elem.second.size(), "");
            found = numbers.find(elem.second);
        }
    }
    return result;
}