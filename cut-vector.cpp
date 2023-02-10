#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n / 2 << endl;
    for (int i = 0; i < n / 2; i++) {
        cout << i * 2 + 1 << " ";
    }
    cout << endl;
    cout << n / 2 << endl;
    for (int i = 0; i < n / 2; i++) {
        cout << i * 2 + 2 << " ";
    }
    cout << endl;
}

/* 

int main() {
    int n;
    cin >> n;
    cout << n << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
                cnt++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl << cnt << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (a == 1) {
            cnt++;
        }
    }
    cout << cnt << endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}

*/
