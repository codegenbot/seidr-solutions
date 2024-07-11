#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

bool isSame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> evenOddCount(int num) {
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
    vector<int> expectedOutput = evenOddCount(0); 
    assert(expectedOutput[0] == 1 && expectedOutput[1] == 0);
    
    int num; 
    cin >> num;  
    vector<int> output = even_odd_count(num);  
    cout << "Even: " << output[0] << ", Odd: " << output[1] << endl;
}