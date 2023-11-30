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

    vector<int> num_list;
    string num;
    for (int i = 0; i < numbers.length(); i++){
        if (numbers[i] == ' '){
            num_list.push_back(num_map[num]);
            num = "";
        }
        else{
            num += numbers[i];
        }
    }
    num_list.push_back(num_map[num]);

    sort(num_list.begin(), num_list.end());

    string sorted_numbers = "";
    for (int i = 0; i < num_list.size(); i++){
        for (auto it = num_map.begin(); it != num_map.end(); it++){
            if (it->second == num_list[i]){
                sorted_numbers += it->first + " ";
                break;
            }
        }
    }

    return sorted_numbers;
}