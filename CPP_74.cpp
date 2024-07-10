#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool is_same(vector<string> a, vector<string> b) {
    return equal(a.begin(), a.end(), b.begin(), b.end());
}

vector<string> total_match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }
    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else return vector<string>();
}

int main() {
    vector<string> user_input; 
    for(int i = 0; i < 5; ++i){
        string input;
        cin >> input;
        user_input.push_back(input);
    }
    
    if (is_same(total_match(user_input, vector<string>(5)), vector<string>(5))) {
        cout << "The two lists are the same." << endl;
    } else {
        cout << "Error: The two lists are not the same." << endl;
    } 
}