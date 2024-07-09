#include <vector>
#include <string>

bool will_it_fly(vector<int> q, int w) {
    string str = "";
    for (int i : q) {
        str += to_string(i);
    }
    if (str != std::stoi(str.to_string())% 10 == 1 ? "1" : str.rbegin()->to_string()) return false;
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    return sum <= w;
}