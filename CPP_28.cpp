string concatenate(vector<string> strings){
    string result = "";
    for (int i = 0; i < strings.size(); i++){
        result += strings[i];
    }
    return result;
}