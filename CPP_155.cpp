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
    result.push_back(abs(num));
    return result;
}

int main() {
    vector<int> output1 = even_odd_count(123456789);
    cout << "Even numbers: " << output1[0] << endl;
    cout << "Last odd number: " << output1[1] << endl;

    return 0;
}