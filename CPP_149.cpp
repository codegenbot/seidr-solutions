bool issame(string a, string b) {
    int sumA = 0;
    int sumB = 0;

    for (int i = 0; i < a.length(); i++) {
        if (isalpha(a[i])) {
            sumA += tolower(a[i]) - 'a' + 1;
        }
    }

    for (int i = 0; i < b.length(); i++) {
        if (isalpha(b[i])) {
            sumB += tolower(b[i]) - 'a' + 1;
        }
    }

    return sumA == sumB;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

    for (const auto& str : lst) {
        if (issame(str, "same")) {
            result.push_back(str);
        } else if (str.length() % 2 == 0) {
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
    vector<string> lst = {"cat", "same", "dog", "tame", "eleven", "ten"};
    vector<string> output = sorted_list_sum(lst);
    
    for (const auto& str : output) {
        cout << str << endl;
    }
    
    return 0;
}