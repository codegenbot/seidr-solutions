#include <string>  // Add this line to include the necessary header file for string

int count_distinct_characters(string str) {
    // Convert the string to lowercase
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    // Create a vector to store distinct characters
    vector<char> distinctChars;

    // Iterate through each character in the string
    for (char c : str) {
        // Check if the character is already in the vector
        if (find(distinctChars.begin(), distinctChars.end(), c) == distinctChars.end()) {
            // If not found, add the character to the vector
            distinctChars.push_back(c);
        }
    }

    // Return the number of distinct characters
    return distinctChars.size();
}

int main() {
    // Change the function call to count_distinct_characters("Jerry jERRY JeRRRY")
    count_distinct_characters("Jerry jERRY JeRRRY");
    return 0;
}