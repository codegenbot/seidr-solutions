```cpp
int main() {
    int count = 0; 
    vector<vector<string>> user_input;
    get_user_input(user_input);
    vector<vector<string>> input = {{"this"}};
    vector<vector<string>> matches = {};
    cout << "Count of matches is: " << total_match(input, matches) << endl;
    return 0;
}