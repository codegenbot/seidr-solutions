vector<string> result;
    string temp;
    for(char c : txt){
        if(c == ' ' || c == ','){
            result.push_back(temp);
            temp = "";
        } else{
            temp += c;
        }
    }
    if(temp != ""){
        result.push_back(temp);
    }
    if(result.size() == 0){
        result.push_back(to_string(count_odd_lower_case(txt)));
    }
    return result;
}