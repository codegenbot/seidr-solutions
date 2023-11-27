#include <iostream>
#include <vector>

using namespace std;

vector<int> incr_list(vector<int> l);

int main() {
    vector<int> input = {1, 2, 3, 4, 5};
    vector<int> output = incr_list(input);
    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }
    cout << endl;
    return 0;
}

vector<int> incr_list(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        result.push_back(l[i] + 1);
    }
    return result;
}