#include <iostream>
#include <boost/any.hpp>

using namespace std;

void solve(int N, int Q, vector<int>& A, vector<int>& B, vector<int>& K) {
    vector<int> ans(N, 0);
    for (int i = 0; i < Q; i++) {
        for (int j = A[i] - 1; j < B[i]; j++) {
            ans[j] += K[i];
        }
    }
    for (int i = 0; i < N; i++) {
        cout << ans[i] << endl;
    }
}

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<int> A(Q), B(Q), K(Q);
    for (int i = 0; i < Q; i++) {
        cin >> A[i] >> B[i] >> K[i];
    }
    solve(N, Q, A, B, K);
    return 0;
}