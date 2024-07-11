int main() {
    int w;
    vector<int> q;
    cout << "Enter the maximum weight (w): ";
    cin >> w;
    cout << "Enter the weights of quarters: ";
    for(int i = 0; i < 4; i++) {
        int x;
        cin >> x;
        q.push_back(x);
    }
    if(will_it_fly(q, w)) {
        cout << "The combination will fly." << endl;
    } else {
        cout << "The combination will not fly." << endl;
    }
    return 0;
}