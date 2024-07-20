string longest(vector<string> strings){
    if(strings.empty()) return ""; // Return None in case the input vector is empty.
    string result = strings[0]; // Initialize the result as the first string in the vector.
    for(const auto& str : strings){ // Iterate over each string in the vector.
        if(str.length() > result.length()) result = str; // Update the result if a longer string is found.
    }
    return result;
}