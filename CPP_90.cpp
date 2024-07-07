#include <iostream>
#include <vector>
using namespace std;

int next_smallest(vector<int> lst) {
    if (lst.empty()) return -1;
    vector<int> copy = lst;
    sort(copy.begin(), copy.end());
    int second_smallest = (copy.size() > 1)? copy[1] : -1; 
    return second_smallest;
}

int main() {
    vector<int> lst;
    cout << "Enter numbers (space-separated): ";
    string input;
    getline(cin, input);
    size_t pos = 0;
    while ((pos = input.find(" ")) != string::npos) {
        int num = stoi(input.substr(0, pos));
        lst.push_back(num);
        input.erase(0, pos + 1);
    }
    if (!input.empty()) {
        int num = stoi(input);
        lst.push_back(num);
    }

    cout << "The next smallest number is: " << next_smallest(lst) << endl;

    return 0;
}