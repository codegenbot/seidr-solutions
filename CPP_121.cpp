#include <iostream>
#include <vector>
using namespace std;

int main() {
    int sum = 0;
    vector<int> lst;
    cout << "Enter numbers (space-separated): ";
    string line;
    getline(cin, line);
    for (int i = 0; i < line.length(); i++) {
        char c = line[i];
        if (c != ' ') {
            int num = 0;
            while (i < line.length() && !isdigit(line[i])) i++;
            while (i < line.length() && isdigit(line[i])) {
                num = num * 10 + (line[i] - '0');
                i++;
            }
            lst.push_back(num);
        }
    }
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    cout << "Sum of odd numbers: " << sum << endl;
}