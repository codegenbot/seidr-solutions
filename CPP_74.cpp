bool issame(vector<string> a,vector<string>b) {
    int sum1 = 0;
    for (const string& s : a) {
        sum1 += s.length();
    }
    
    int sum2 = 0;
    for (const string& s : b) {
        sum2 += s.length();
    }
    
    return sum1 == sum2;
}

int main() {
    vector<string> lst1 = {"hello","world"};
    vector<string> lst2 = {"java","cpp"};
    vector<string> result = total_match(lst1, lst2);
    if (issame(result,lst1)) {
        cout << "Match 1";
    }
    else if (issame(result,lst2)) {
        cout << "Match 2";
    }
    else {
        cout << "No Match";
    }
    return 0;
}