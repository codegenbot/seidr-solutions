Here is the completed code:

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0, sum2 = 0;
    for (const string& s : lst1) sum1 += s.size();
    for (const string& s : lst2) sum2 += s.size();

    if (sum1 < sum2)
        return lst1;
    else if (sum1 > sum2)
        return lst2;
    else
        return lst1;
}