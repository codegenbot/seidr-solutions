#include <vector>
using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) 
        return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i])
            return false;
    }
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int level = 1;
    for (int i = 1; ; i++) {
        if ((n % 2 == 0 && i % 2 == 0) || (n % 2 != 0 && i % 2 != 0)) {
            pile.push_back(i);
            n--;
            level++;
        }
        if (n == 0) break;
    }
    return pile;
}

int main() {
    int n;
    cout << "Enter number of elements in the stack: ";
    cin >> n;
    vector<int> pile = make_a_pile(n);
    cout << "The final state of the pile is: ";
    for (int i = 0; i < pile.size(); i++) {
        cout << pile[i] << " ";
    }
    cout << endl;

    return 0;
}