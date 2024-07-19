#include <iostream>
#include <vector>
using namespace std;

int count(int num) {
    int res = 0;
    for (int i : {1, 2, 3, 4, 5, 6, 7, 8, 9}) {
        if (i == num) res++;
    }
    return res;
}

int search(vector<unsigned long long> lst) {
    unsigned long long max = 0;
    for (unsigned long long i : lst) {
        if (i > 0 && i >= count(i)) {
            max = i;
        }
    }
    return max == 0 ? -1 : max;
}

int main() {
    vector<unsigned long long> lst; 
    for (int i = 0; i < 5; ++i) { 
        unsigned long long temp; cin >> temp; lst.push_back(temp); 
    }
    int result = search(lst);
    cout << "The largest number in the list is: " << result << endl;
}