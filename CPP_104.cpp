#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> unique_digits(vector<int> x){
    vector<int> result;
    for(int i: x){
        bool has_even = false;
        int num = i;
        while(num > 0){
            if((num%10) % 2 == 0)
                has_even = true;
            num /= 10;
        }
        if(!has_even)
            result.push_back(i);
    }
    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> numbers = {12, 23, 34, 45, 56};
    vector<int> unique_numbers = unique_digits(numbers);

    // Check if the input and output are the same
    bool same = issame(numbers, unique_numbers);
    
    if(same) {
        cout << "The numbers are the same." << endl;
    } else {
        cout << "The numbers are different." << endl;
    }

    return 0;
}