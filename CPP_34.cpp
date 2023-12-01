vector<int> myUnique(vector<int> l){
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    assert(myUnique({5, 3, 5, 2, 3, 3, 9, 0, 123}) == vector<int>{0, 2, 3, 5, 9, 123});
    return 0;
}