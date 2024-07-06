int main() {
    vector<int> lst = {3, 13, 2, 9};
    if(solutions(lst) == -1) {
        cout << "Error: No solution found." << endl;
    } else {
        int result = solutions(lst);
        cout << "Result: " << result << endl;
    }
    return 0;
}