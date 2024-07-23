map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, 
                                {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    
    string result = "";
    int count[10] = {0};
    
    size_t pos = 0;
    string token;
    while ((pos = numbers.find(" ")) != string::npos) {
        token = numbers.substr(0, pos);
        count[num_map[token]]++;
        numbers.erase(0, pos + 1);
    }
    count[num_map[numbers]]++;
    
    for(int i = 0; i < 10; i++){
        while(count[i] > 0){
            result += num_map.begin()->first + " ";
            count[i]--;
        }
    }
    
    result.pop_back(); // Remove the extra space at the end
    
    return result;
}