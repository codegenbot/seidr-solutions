int fruit_distribution(string s, int n){
    int apples = 0;
    int oranges = 0;
    int mangoes = 0;
    
    // Find the position of "apples" and "oranges" in the string
    int applesPos = s.find("apples");
    int orangesPos = s.find("oranges");
    
    // Extract the number of apples and oranges from the string
    if (applesPos != string::npos) {
        apples = stoi(s.substr(0, applesPos));
    }
    if (orangesPos != string::npos) {
        oranges = stoi(s.substr(applesPos + 7, orangesPos - applesPos - 7));
    }
    
    // Calculate the number of mangoes
    mangoes = n - apples - oranges;
    
    return mangoes;
}