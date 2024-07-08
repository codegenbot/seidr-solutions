#include <iostream>
#include <sstream>
using namespace std;

int choose_num(int x, int y) {
    vector<int> result;
    stringstream ss;
    for (int i = x; i <= y; i++) {
        if (i % 2 == 0)
            ss << i << " ";
    }
    string temp = ss.str();
    size_t pos = 0;
    while ((pos = temp.find(" ")) != string::npos) {
        int num = stoi(temp.substr(0, pos));
        result.push_back(num);
        temp.erase(0, pos + 1);
    }
    if (!temp.empty())
        result.push_back(stoi(temp));
    return *max_element(result.begin(), result.end());
}

int main() {
    int x, y;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of y: ";
    cin >> y;
    cout << "The biggest even integer is: " << choose_num(x,y) << endl;
}