int countChars(vector<string> lst) {
    int count = 0;
    for (string str : lst) {
        count += str.size();
    }
    return count;
}

vector<string> total_match(vector<string> lst1, vector<string> lst2){
    return countChars(lst1) < countChars(lst2) ? lst1 : countChars(lst1) == countChars(lst2) ? lst1 : lst2;
}