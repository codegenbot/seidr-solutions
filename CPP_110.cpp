#include <string>
#include <vector>
#include <iostream>

using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    bool allEven = true;
    for(int num : lst1) {
        if(num % 2 != 0) {
            allEven = false;
            break;
        }
    }
    if(allEven) return "YES";

    for(int num : lst2) {
        if(num % 2 == 0) {
            return "YES";
        }
    }

    return "NO";
}

int main() {
    cout << (exchange({100, 200}, {200, 200}) == "YES") << endl;
    return 0;
}