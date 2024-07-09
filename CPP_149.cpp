vector<string> issame(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<string> input;
    // read from input file or user
    // assume input = {"hello", "world", "abc", "def"}
    vector<string> output = issame(input);
    vector<string> output2 = sorted_list_sum(input);
    
    for (const auto& str : output) {
        cout << str << endl;
    }
    
    for (const auto& str : output2) {
        cout << str << endl;
    }
    return 0;
}