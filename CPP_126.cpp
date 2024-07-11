#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
        else if(std::count(lst.begin(), lst.end(), lst[i]) > 1){
            return false;
        }
    }
    return true;

int main() {
    vector<int> lst;
    cout << "Enter numbers (space separated): ";
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        lst.push_back(num);
    }
    cout << (is_sorted(lst) ? "True" : "False") << endl; 
}