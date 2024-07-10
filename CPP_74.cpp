#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool is_same(vector<string> a, vector<string> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<std::string> user_list_comparer(std::vector<std::string> lst1, std::vector<std::string> lst2) {
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
    else return {};
}

int main() {
    vector<string> user_input; 
    for(int i = 0; i < 5; ++i){
        string input;
        cin >> input;
        user_input.push_back(input);
    }
    
    if (is_same(user_list_comparer(user_input, {}), {})) {
        cout << "The two lists are the same." << endl;
    } else {
        cout << "Error: The two lists are not the same." << endl;
    } 
}