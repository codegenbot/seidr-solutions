int original_main() {
    vector<string> user_input;
    get_user_input(user_input);
    if (check_if_same(total_match(user_input, vector<string>(1)), user_input)) {
        cout << "The two lists are the same." << endl;
    } else {
        cout << "Error: The two lists are not the same." << endl;
    }
    return original_main();
}