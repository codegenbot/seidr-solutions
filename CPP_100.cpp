#include <vector>

vector<int> make_a_pile(int n){
    vector<int> pile;
    int stones = n;
    pile.push_back(stones);
    for(int i = 1; i < n; i++){
        if(stones % 2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
        pile.push_back(stones);
    }
    return pile;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = make_a_pile(n);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}