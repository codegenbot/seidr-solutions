Here is the solution:

string find_max(vector<string> words) {
    string result = *max_element(words.begin(), words.end(),
        [](const string& s1, const string& s2) {
            int count1 = 0;
            for (char c : s1)
                if (count(c) == 1) count1++;
            int count2 = 0;
            for (char c : s2)
                if (count(c) == 1) count2++;
            return tie(count1, s1) < tie(count2, s2);
        });
    return result;
}