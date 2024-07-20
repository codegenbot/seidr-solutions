vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    
    return result;
}

int main() {
    vector<string> list = {"apple", "banana", "cherry"};
    vector<string> output = sorted_list_sum(list);
    for (const auto& str : output) {
        cout << str << endl;
    }
    return 0;
}