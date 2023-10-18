#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    stringstream ss(str);
    int n, m;
    ss >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        getline(cin, str);
        stringstream ss(str);
        for(int j = 0; j < m; j++) ss >> a[i][j];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
