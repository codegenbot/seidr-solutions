vector<string> filter_by_substring(vector<string> strings, string substring);
vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(const string& str : strings){
        if(str.find(substring) != string::npos){
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    // Example usage of filter_by_substring function
    vector<string> input_strings = {"apple", "banana", "cherry", "orange"};
    string substring = "an";
    vector<string> filtered_strings = filter_by_substring(input_strings, substring);

    for(const string& str : filtered_strings){
        cout << str << " ";
    }

    return 0;
}
