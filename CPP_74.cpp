int countTotalChars(vector<string> lst) {
    int totalChars = 0;
    for (string str : lst) {
        totalChars += str.size();
    }
    return totalChars;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int totalChars1 = countTotalChars(lst1);
    int totalChars2 = countTotalChars(lst2);

    if (totalChars1 < totalChars2) {
        return lst1;
    } else {
        return totalChars1 == totalChars2 ? lst1 : lst2;
    }
}