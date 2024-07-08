#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int choose_num(int x, int y) {
    vector<int> result;
    stringstream ss;
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0)
            ss << i << " ";
    }
    string str = ss.str();
    size_t pos = 0;
    while ((pos = str.find(" ")) != string::npos) {
        result.push_back(stoi(str.substr(0, pos)));
        str.erase(0, pos + 1);
    }
    if (!str.empty())
        result.push_back(stoi(str));
    
    int max = INT_MIN;
    for (int i : result)
        if (i > max)
            max = i;
    return max;
}

int main() {
    int x, y;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    cout << "The biggest even integer is: " << choose_num(x,y) << endl;
}