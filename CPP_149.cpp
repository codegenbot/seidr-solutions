bool issame(const vector<string>& a, const vector<string>& b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<string> sorted_list_sum(const vector<string>& lst) {
    vector<string> lst_copy = lst;
    
    lst_copy.erase(remove_if(lst_copy.begin(), lst_copy.end(), [](const string& s){ return s.length() % 2 != 0; }), lst_copy.end());
    sort(lst_copy.begin(), lst_copy.end(), [](const string& a, const string& b){
        if (a.length() == b.length()) {
            return a < b;
        }
        return a.length() < b.length();
    });
    
    return lst_copy;
}

int main() {
    vector<string> input = {"apple", "banana", "orange", "grape", "kiwi"};
    vector<string> result = sorted_list_sum(input);
    
    if (issame(input, result)) {
        cout << "The original list and sorted list are the same." << endl;
    } else {
        cout << "The original list and sorted list are different." << endl;
    }
    
    return 0;
}