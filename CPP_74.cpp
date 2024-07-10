vector<string> user_input; 
    for(int i = 0; i < 5; ++i){
        string input;
        cin >> input;
        user_input.push_back(input);
   
    
    if (check_if_same(total_match(user_input, vector<string>(5)), vector<string>(5))) {
        cout << "The two lists are the same." << endl;
    } else {
        cout << "Error: The two lists are not the same." << endl;
    } 
}