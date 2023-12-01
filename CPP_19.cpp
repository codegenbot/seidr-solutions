string sort_numbers(string numbers){
    map<string, int> num_map;
    num_map["zero"] = 0;
    num_map["one"] = 1;
    num_map["two"] = 2;
    num_map["three"] = 3;
    num_map["four"] = 4;
    num_map["five"] = 5;
    num_map["six"] = 6;
    num_map["seven"] = 7;
    num_map["eight"] = 8;
    num_map["nine"] = 9;
    
    string result = "";
    string current = "";
    
    for(int i = 0; i < numbers.length(); i++){
        if(numbers[i] == ' '){
            result += current + " ";
            current = "";
        }else{
            current += numbers[i];
        }
    }
    result += current;
    
    vector<string> num_list;
    current = "";
    
    for(int i = 0; i < result.length(); i++){
        if(result[i] == ' '){
            num_list.push_back(current);
            current = "";
        }else{
            current += result[i];
        }
    }
    num_list.push_back(current);
    
    sort(num_list.begin(), num_list.end(), [&](const string& a, const string& b){
        return num_map[a] < num_map[b];
    });
    
    string sorted_numbers = "";
    for(int i = 0; i < num_list.size(); i++){
        sorted_numbers += num_list[i] + " ";
    }
    
    return sorted_numbers;
}