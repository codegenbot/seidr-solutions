int fruit_distribution(string s, int n) {
    istringstream iss(s);
    string token;
    int total = 0;
    int apples = 0;
    int oranges = 0;

    while (getline(iss, token, ' ')) {
        if(token == "apples") {
            istringstream app_token(getline(iss, token));
            app_token >> apples;
        } else if(token == "oranges") {
            istringstream ora_token(getline(iss, token));
            ora_token >> oranges;
        }
    }

    total = n - apples - oranges;

    return total;
}