vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = text.length();
    int targ_len = target.length();

    for(int i = 0; i <= len - targ_len; i++) {
        if(text.substr(i,targ_len) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> v = indicesOfSubstring(text, target);

    for(int i: v) 
        cout << i << endl;

    return 0;
}