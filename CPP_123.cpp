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
    vector<int> output = get_odd_collatz(12);
    cout << "Output: ";
    for(int i=0;i<output.size();i++) {
        if(i != output.size()-1)
            cout << output[i] << " ";
        else
            cout << output[i];
    }
    return 0;
}