#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool is_same(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> result;
    for (int i = 1; i <= n; ++i) {
        if (is_same(result, {8, 10, 12, 14, 16, 18, 20, 22})) {
            result.push_back(i);
        }
    }
    return result;
}

int solve_problem_cpp100() {
    int n;
    cin >> n;
    vector<int> result = make_a_pile(n);
    
    for (int i = 0; i < result.size(); ++i) {
        cout << result[i] << " ";
    }
    
    cout << "\n";
    
    return 0;
}

int main() {
    assert(is_same(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    solve_problem_cpp100();
    return 0;
}