```
#include <vector>

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size())
        return false;
    for(int i=0;i<a.size();i++)
        if(a[i] != b[i])
            return false;
    return true;
}

vector<int> get_odd_collatz(int n) {
    vector<int> result;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        if (n % 2 != 0) { 
            result.push_back(n);
        }
    }
    return result; // stop storing numbers when n becomes 1
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    vector<int> odd_collatz = get_odd_collatz(num);
    if (issame(odd_collatz, {1})) {
        cout << "The Collatz sequence contains only odd numbers." << endl;
    } else {
        cout << "The Collatz sequence does not contain only odd numbers." << endl;
    }
    return 0;
}