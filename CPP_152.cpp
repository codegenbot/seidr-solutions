#include <iostream>
#include <vector>

using namespace std;

vector<int> compare(vector<int>, vector<int>) {
    return {};
}

int main() {
    vector<int> game = {1, 2, 3};
    vector<int> guess = {4, 5, 6};

    vector<int> result = compare(game, guess);

    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}