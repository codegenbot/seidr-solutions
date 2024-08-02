#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<float> l;
    cout << "Enter numbers (enter 'stop' to finish): ";
    string x;
    while (true) {
        cin >> x;
        if (x == "stop") break;
        l.push_back(stof(x));
    }
    vector<float> result = get_positive(l);
    for (float f : result) cout << f << " ";
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