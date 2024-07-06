```cpp
int fruit_distribution(string s, int n) {
    istringstream iss(s);
    string token;
    int total = 0;
    int apples = 0;
    int oranges = 0;

    while (getline(iss, token, ' ')) {
        if(token == "apples" || token == "oranges") {
            istringstream tks(token);
            string tk;
            tks >> tk;

            if(tk == "apples") {
                int apples_count;
                tks >> apples_count;
                apples = apples_count;
            } else if (tk == "oranges") {
                int oranges_count;
                tks >> oranges_count;
                oranges = oranges_count;
            }
        }
    }

    total = n - apples - oranges;

    return total;
}