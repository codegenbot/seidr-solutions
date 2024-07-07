Here's the solution:

string concatenate(vector<string> strings){
    string result = "";
    for(auto s : strings) {
        result += s;
    }
    return result;
}