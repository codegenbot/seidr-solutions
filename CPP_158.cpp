string result = "";
    int max_unique_count = 0;

    for (const string& word : words) {
        int unique_count = unordered_set<char>(word.begin(), word.end()).size();

        if (unique_count > max_unique_count || (unique_count == max_unique_count && word < result)) {
            max_unique_count = unique_count;
            result = word;
        }
    }

    return result;
}