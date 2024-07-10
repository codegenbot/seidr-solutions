int main() {
    vector<vector<string>> user_input;
    get_user_input(user_input);
    int count = total_match(user_input, {{{"some"}}});
    cout << "Count of matches is: " << count << endl;
    return 0;
}