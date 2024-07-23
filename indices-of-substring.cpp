```cpp
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int last = -1;
    while ((last = text.find(target, last + 1)) != std::string::npos) {
        indices.push_back(last);
        last += target.size();
    }
    return indices;
}

int main() {
    std::string text;
    cout << "Enter the text: ";
    cin >> text;

    std::string target;
    int t;
    cout << "Enter number of targets to find: ";
    cin >> t;
    for(int i=0; i<t; ++i) {
        string temp;
        getline(cin, temp);
        std::vector<int> indices = findIndices(text, temp);
        for (int i : indices) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}