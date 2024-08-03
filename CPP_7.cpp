int main() {
    vector<string> result = filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run");
    if (result == vector<string>{"grunt", "prune"}) {
        cout << "Test passed";
    } else {
        cout << "Test failed";
    }
    
    return 0;
}