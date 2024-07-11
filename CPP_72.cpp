int main() {
    int w;
    cout << "Enter weight: ";
    cin >> w;
    vector<int> q(3);
    for(int i = 0; i < 3; i++){
        cout << "Enter the weight of query " << (i+1) << ": ";
        cin >> q[i];
    }
    if(will_it_fly(q, w))
        cout << "It will fly";
    else
        cout << "It won't fly";
    return 0;
}

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) return false; // not balanced
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}