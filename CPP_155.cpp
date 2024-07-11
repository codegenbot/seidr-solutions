#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> even_odd_count(int num) {
    vector<int> result;
    int count = 0;
    while(num != 0) {
        int digit = num % 10;
        if(digit % 2 == 0)
            count++;
        num /= 10;
    }
    result.push_back(count);
    if(num < 0) result.push_back(-1); else result.push_back(1);
    return result;
}

int main() {
    assert(issame(even_odd_count(0), vector<int>{1,0}));
    int num; 
    cout << "Enter a number: ";
    cin >> num;
    vector<int> output = even_odd_count(num);
    cout << "Even count: " << output[0] << endl;
    if(output[1] < 0) cout << "Odd part is negative." << endl; else cout << "Odd part is positive." << endl;
    return 0;
}