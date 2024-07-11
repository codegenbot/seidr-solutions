string longest(vector<string> strings){
    if(strings.empty()) return ""; // Return None in case the input vector is empty.
    string result = strings[0];  // Initialize the result as the first string in the vector.
    for(auto str : strings) {     // Iterate through all strings in the vector.
        if(str.length() > result.length()) {
            result = str;         // Update the result with the longest string found so far.
        }
    }
    return result;
}