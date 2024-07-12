#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    while (index <= text.length() - target.length()) {
        index = text.find(target, index);
        if (index == string::npos) break;
        indices.push_back(index);
        index += 1; // increment by 1 to avoid overlapping
    }
    return indices;
}

int greatestCommonDivisor(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << greatestCommonDivisor(num1, num2) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}