#include <iostream>
#include <vector>

using namespace std;

vector<int> incr_list(vector<int> l) {
    for(int i = 0; i < l.size(); i++){
        l[i]++;
    }
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    int n;
    cin >> n;
    vector<int> input(n);
    for(int i = 0; i < n; i++){
        cin >> input[i];
    }

    vector<int> result = incr_list(input);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;
}