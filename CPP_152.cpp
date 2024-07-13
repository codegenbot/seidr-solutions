int main() {
    int n;
    cin >> n;
    vector<int> game(n), guess(n);
    for(int i = 0; i < n;i++){
        cin >> game[i] >> guess[i];
    }
    
    if(!compare(game,guess)) { 
        cout << "Error: Invalid input. Please check your input again." << endl;
        return 1;
    } else {
        vector<int> res = getResult(game,guess);
        for(auto x:res)cout << x << " ";
        cout << endl; 
    }
    
    return 0;
}