string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end(), 
                                 [&result](const string& a, const string& b) {
                                     if (a.length() != b.length()) 
                                         return a.length() < b.length();
                                     int countA = 0, countB = 0;
                                     for (char c : a) {
                                         if (!isalpha(c)) continue;
                                         if (countA <= countB)
                                             countA++;
                                         else
                                             countB++;
                                     }
                                     return countA > countB;
                                 });
    return result;
}