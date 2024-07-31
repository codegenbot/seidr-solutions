// Update the function signature to declare "odd_count" function
vector<string> odd_count(vector<string> lst);

// Implement the "odd_count" function to count odd elements in strings
vector<string> odd_count(vector<string> lst) {
    vector<string> result;
    for (string s : lst) {
        int odd_count = 0;
        for (char c : s) {
            if ((c - '0') % 2 != 0) {
                odd_count++;
            }
        }
        result.push_back("the number of odd elements " + to_string(odd_count) + " in the string " + s + " of the input.");
    }
    return result;
}

// Define a new function "issame" to compare two vectors of strings
bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

// In the main function, test the output of "odd_count" using "issame"
assert(issame(odd_count({"271", "137", "314"}), {
    "the number of odd elements 2 in the string 271 of the input.",
    "the number of odd elements 2 in the string 137 of the input.",
    "the number of odd elements 2 in the string 314 of the input."
}));