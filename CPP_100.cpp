int solve_problem_cpp100() {
    int n;
    cin >> n; // Read input correctly
    std::vector<int> result = make_a_pile(n);
    
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    
    cout << "\n"; // Add a newline
    
    return 0;
}

int main() {
    solve_problem_cpp100(); // Call the function
    return 0;
}