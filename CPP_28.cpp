```cpp
string concatenateStrings(vector<string> strings){
    string resultString = "";
    for(string s : strings) {
        resultString += s;
    }
    return resultString;
}