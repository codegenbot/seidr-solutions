#include <vector>

bool issame(int a, int b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    for(int i=1; i<n; i++){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

int main() {
    int n = 5;
    vector<int> result = make_a_pile(n);
    for (int i : result) {
        if (issame(i, n)) {
            cout << "Same number: " << i << endl;
        }
    }
    return 0;
}