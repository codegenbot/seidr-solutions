#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != reverse(str).s) return false;
    int sum = 0;
    for (int i : q) sum += i;
    return sum <= w;
}

int main() {
    vector<int> q;
    int w;
    
    cout << "Enter the number of queens: ";
    int n;
    cin >> n;
    for(int i=0; i<n; ++i){
        cout << "Enter queen's weight: ";
        cin >> w;
        q.push_back(w);
    }
    cout << "Will it fly? " << (will_it_fly(q, w) ? "Yes" : "No") << endl;

    return 0;
}