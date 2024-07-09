using namespace std;

bool issame(vector<string> a, vector<string>b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;
}

int main() {
    int n, m;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> v(n);

    for(int i = 0; i < n; i++) {
        cout << "Enter string "<<i+1<<": ";
        cin.ignore();
        getline(cin, v[i]);
    }

    int p;
    cout << "Enter number of prefix: ";
    cin >> p;

    vector<string> pfx(p);
    
    for(int i = 0; i < p; i++) {
        cout << "Enter prefix "<<i+1<<": ";
        cin.ignore();
        getline(cin, pfx[i]);
    }

    bool res = issame(v,pfx);

    if(res)
        cout << "Strings are same\n";
    else
        cout << "Strings are not same\n";

    vector<string> result = filter_by_prefix(v,"");
    for(string str : result) {
        cout << str << "\n";
    }

    return 0;
}