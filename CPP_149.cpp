int main() {
    int n;
    cin >> n; 
    vector<string> lst;
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s); 
        lst.push_back(s);
    }
    
    if(sorted_list_sum(lst).size() == 0){
        cout << "Sorted List Sum: ";
        for(auto &s : lst){
            cout << s << ", ";
        }
        cout << endl;
    }else{
        vector<vector<string>> result = sorted_list_sum(lst);
        for (auto &v : result) { 
            cout << v[0] << ": " << v[1] << endl;
        }
    }

    return 0;
}