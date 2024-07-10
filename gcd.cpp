#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int lastFound = -target.size();
    
    while (true) {
        size_t found = text.find(target, lastFound + 1);
        if (found == string::npos)
            break;
        result.push_back(found);
        lastFound = found;
    }
    
    return result;
}

int greatestCommonDivisor(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << greatestCommonDivisor(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for(int i : indices)
        cout << i << " ";
    return 0;
}