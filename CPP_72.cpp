int main() {
    vector<int> q;
    int w;
    cout << "Enter a sequence of numbers (space-separated): ";
    for(int i = 0; i < 5; i++) {
        cin >> w;
        q.push_back(w);
    }
    cout << "Will it fly? " << boolalpha << will_it_fly(q, w) << endl;
    return 0;
}