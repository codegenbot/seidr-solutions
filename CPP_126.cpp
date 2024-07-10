```cpp
#include <vector>
#include <algorithm>

using namespace std;

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
        else if(count(lst.begin(), lst.end(), lst[i]) > 1){
            return false;
        }
    }
    return true;

{
    vector<int> lst;
    cout << "Enter the numbers (enter 'q' to quit): ";
    string input;
    while(true) {
        cin >> input;
        if(input == "q") break;
        int num = stoi(input);
        lst.push_back(num);
    }
    cout << (is_sorted(lst) ? "True" : "False") << endl; 
}