int main {
    int n;  
    cin >> n;
    vector<vector<int>> q(n);  
    for(int i=0; i<n; i++) {
        int x, y; 
        cin >> x >> y;
        q[i].push_back({x,y});
    }
    int w;
    cin >> w;
    if (!will_it_fly(q, w)) {
        cout << "Will not fly.\n";
    } else {
        cout << "Will fly.\n";
    }
    return 0;
}