```
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<float> l;
    cout << "Enter numbers (enter 'stop' to finish): ";
    string s;
    while(getline(cin, s)) {
        if(s == "stop") break;
        l.push_back(stof(s));
    }
    vector<float> result = get_positive(l);
    for(float x : result) {
        cout << x << " ";
    }
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