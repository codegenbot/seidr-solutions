#include <iostream>
#include <vector>

using namespace std;

string intersection(vector<int> interval1, vector<int> interval2) {
    int start = max(interval1[0], interval2[0]);
    int end = min(interval1[1], interval2[1]);

    if (start > end) {
        return "NO";
    }

    int len = end - start + 1;
    
    bool isPrime = true;

    for(int i=2; i*i <= len; i++) {
        if(len%i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if(isPrime)
        return "YES";
    else
        return "NO";
}

int main() {
    vector<int> interval1 = {1, 2};
    vector<int> interval2 = {2, 3};

    cout << intersection(interval1, interval2) << endl;

    return 0;
}