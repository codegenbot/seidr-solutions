bool issame(vector<int> a, vector<int> b) {
    return (a.size() == 2 && b.size() == 2 && a[0] == b[0] && a[1] == b[1]);
}

int main() {
    vector<int> lst;
    int num;
    while (true) {
        cout << "Enter a number (-9999 to stop): ";
        cin >> num;
        if (num == -9999)
            break;
        lst.push_back(num);
    }
    vector<int> result = largest_smallest_integers(lst);
    cout << "Largest: " << result[1] << endl;
    cout << "Smallest: " << result[0] << endl;
}