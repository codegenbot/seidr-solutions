vector<string> split_words(string txt) {
    vector<string> result;
    int count = 0;
    for (int i = 0; i < txt.length(); i++) {
        if (!ispunct(txt[i])) { // Check if character is a punctuation mark
            if (txt[i] == ' ') { // If it's a space, split the words
                result.push_back(txt.substr(count, i - count));
                count = i + 1;
            } else if (txt[i] != ',') { // If it's not a comma and not a punctuation mark, keep counting the word
                continue;
            } else {
                if (count < i) { // If there are already words split on commas, add them to the result
                    result.push_back(txt.substr(count, i - count));
                }
                count = i + 1; // Reset the counter for the new word
            }
        } else { // If it's a punctuation mark, just move on to the next character
            continue;
        }
    }
    if (count < txt.length()) { // Add the last word to the result
        result.push_back(txt.substr(count));
    }

    // Count and return odd-order lower-case letters in the alphabet
    int sum = 0;
    for (char c : txt) {
        if (islower(c)) {
            sum += c - 'a';
        }
    }
    vector<string> single_element;
    single_element.push_back(to_string(sum % 2 == 1 ? sum : 26));
    return result.empty() ? single_element : result;
}