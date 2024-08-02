#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<float> l;
    cout << "Enter numbers (type 'stop' to finish): ";
    string s;
    while (true) {
        cin >> s;
        if (s == "stop") break;
        float x = stof(s);
        l.push_back(x);
    }
    vector<float> result = get_positive(l);
    cout << "Positive numbers: ";
    for (float x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}