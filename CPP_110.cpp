#include <string>
#include <vector>
#include <iostream>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    // Check if lst1 already contains only even numbers
    bool allEven = true;
    for(int num : lst1) {
        if(num % 2 != 0) {
            allEven = false;
            break;
        }
    }
    if(allEven) return "YES";

    // Check if there is at least one even number in lst2
    for(int num : lst2) {
        if(num % 2 == 0) {
            return "YES";
        }
    }

    return "NO";
}

int main() {
    vector<int> lst1, lst2;
    int n1, n2, temp;

    cin >> n1;
    for(int i = 0; i < n1; ++i) {
        cin >> temp;
        lst1.push_back(temp);
    }

    cin >> n2;
    for(int i = 0; i < n2; ++i) {
        cin >> temp;
        lst2.push_back(temp);
    }

    cout << exchange(lst1, lst2) << endl;
    return 0;
}