int main() {
    int w;
    vector<int> q;
    cout << "Enter the weight: ";
    cin >> w;
    cout << "Enter the qualities (space separated): ";
    string s;
    getline(cin, s);
    vector<string> strVec = split(s, ' ');
    for (string s : strVec) {
        int val = stoi(s);
        q.push_back(val);
    }
    if (!will_it_fly(q, w)) cout << "It won't fly";
    else cout << "It will fly";
    return 0;
}

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) return false; // not balanced
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}