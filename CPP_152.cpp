int main() {
    int n;
    cin >> n;
    vector<int> game(n),guess(n);
    for(int i = 0; i < n;i++){
        cin >> game[i] >> guess[i];
    }
    vector<int> res = getResult(game,guess);
    if(res.size() != n) {
        cout << "Error: Invalid input. Please check your input again." << endl;
    } else {
        for(auto x:res)cout << x << " ";
        cout << endl; 
    }
    return 0;
}