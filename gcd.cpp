#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    string text = "banana";
    string target = "an";
    vector<int> result;

    for(int i=0; i<=text.length()-target.length();i++){
        int j=0;
        while(j<target.length()){
            if(text[i+j] != target[j])break;
            j++;
        }
        if(j==target.length())result.push_back(i);
    }

    cout << "Indices of substring: ";
    for(auto x:result)cout << x << " ";
    cout << endl;

    return 0;
}