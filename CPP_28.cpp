Here is the completed code:

string concatenate(vector<string> strings){
    string result = "";
    for(auto str : strings) {
        result += str;
    }
    return result;
}