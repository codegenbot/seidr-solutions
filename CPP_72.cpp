bool will_it_fly(vector<int> q, int w); 
int main() {
    vector<int> q;
    int w;
    cout << "Enter number of queues: ";
    cin >> w;
    for(int i = 0; i < w; ++i) {
        cout << "Enter queue element: ";
        int num;
        cin >> num;
        q.push_back(num);
    }
    if(will_it_fly(q, w))
        cout << "The structure will fly";
    else
        cout << "The structure will not fly";
    return 0;
}
bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}
