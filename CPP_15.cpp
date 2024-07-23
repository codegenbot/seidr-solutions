string result = "";
    for(int i = 0; i <= n; i++){
        result += to_string(i) + " ";
    }
    return result.substr(0, result.size()-1);
}