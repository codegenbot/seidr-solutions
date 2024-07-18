vector<string> separate_paren_groups(string paren_string);
bool areSame(string a, string b);

bool areSame(string a, string b) {
    return separate_paren_groups(a) == separate_paren_groups(b);
}

int main() {
    // existing code remains the same, just replace `issame` with `areSame`
    // vector<string> result = separate_paren_groups("((group)(of))(parentheses)");
    // for (const auto& group : result) {
    //     cout << group << endl;
    // }

    return 0;
}