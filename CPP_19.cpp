string sort_numbers(string numbers){
    map<string, int> numeral_map;
    numeral_map["zero"] = 0;
    numeral_map["one"] = 1;
    numeral_map["two"] = 2;
    numeral_map["three"] = 3;
    numeral_map["four"] = 4;
    numeral_map["five"] = 5;
    numeral_map["six"] = 6;
    numeral_map["seven"] = 7;
    numeral_map["eight"] = 8;
    numeral_map["nine"] = 9;

    multimap<int, string> sorted_numbers;
    string current_number;
    for(int i=0; i<numbers.size(); i++){
        if(numbers[i] != ' '){
            current_number += numbers[i];
        }
        else{
            sorted_numbers.insert(make_pair(numeral_map[current_number], current_number));
            current_number = "";
        }
    }
    sorted_numbers.insert(make_pair(numeral_map[current_number], current_number));

    string sorted_string = "";
    for(auto it = sorted_numbers.begin(); it != sorted_numbers.end(); it++){
        sorted_string += it->second + " ";
    }
    sorted_string.pop_back(); // Remove the trailing space

    return sorted_string;
}