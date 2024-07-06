bool issame(string a, string b) {
    if(a.length() != b.length())
        return false;
    for(int i=0; i<a.length(); i++)
        if(a[i] != b[i])
            return false;
    return true;
}

int main() {
    vector<string> lst = {"A1", "B3", "C5", "D4"};
    vector<string> result = sorted_list_sum(lst);
    for (const auto& str : result) {
        bool found = false;
        for(const auto& str2:lst){
            if(issame(str, str2)) {
                cout << str << " is same as " << str2 << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << str << " is not present in the list" << endl;
    }
    return 0;
}