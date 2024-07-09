bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<vector<int>> checkNumbers() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    vector<int> even_odd_count1 = even_odd_count(num1);
    vector<int> even_odd_count2 = even_odd_count(num2);

    if(issame(even_odd_count1, even_odd_count2))
        return {{even_odd_count1[0], even_odd_count1[1]}, {even_odd_count2[0], even_odd_count2[1]}};
    else
        return {{-1,-1}, {-1,-1}};
}

vector<int> even_odd_count(int num) {
    int evens = 0, odds = 0;
    string str = to_string(abs(num));
    for (char c : str) {
        if (stoi(c) % 2 == 0)
            evens++;
        else
            odds++;
    }
    return {evens, odds};
}