Here is the completed code:

vector<string> sorted_list_sum(vector<string> lst) {
    // Filter out strings with odd lengths
    vector<string> evenLengthWords;
    for (const string& word : lst) {
        if (word.length() % 2 == 0) {
            evenLengthWords.push_back(word);
        }
    }

    // Sort the remaining words by length and then alphabetically
    std::sort(evenLengthWords.begin(), evenLengthWords.end(),
              [](const string& a, const string& b) {
                  if (a.length() != b.length()) {
                      return a.length() < b.length();
                  } else {
                      return a < b;
                  }
              });

    return evenLengthWords;
}