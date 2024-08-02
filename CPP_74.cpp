vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    vector<string> result;
    int count1 = 0, count2 = 0;

    for (const string& s : lst1) {
        count1 += s.size();
    }
    for (const string& s : lst2) {
        count2 += s.size();
    }

    if (count1 < count2) {
        return lst1;
    } else if (count1 > count2) {
        return lst2;
    } else {
        if (&lst1 != &lst2) { // check if they are the same vector
            return lst1; // if not, return the first one
        }
        return result; // if they are the same, just return an empty vector
    }
}