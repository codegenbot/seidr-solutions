#include <iostream>
using namespace std;

int main() {
    vector<float> lst;
    cout << "Enter numbers (enter 'stop' to finish): ";
    while(true) {
        string s;
        cin >> s;
        if(s == "stop") break;
        float num = stof(s);
        lst.push_back(num);
    }
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    cout << "Sum: " << sum << endl;
    return 0;
}