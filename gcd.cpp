#include <vector>
using namespace std;

vector<int> findIndices(const string& text, const string& target) {
    vector<int> indices;
    int targetLen = target.length();
    for(int i=0; i<=text.length()-targetLen; i++){
        bool found = true;
        for(int j=0; j<targetLen; j++){
            if(text[i+j] != target[j]){
                found = false;
                break;
            }
        }
        if(found) indices.push_back(i);
    }
    return indices;
}

int findGCD(int a, int b) {
    int result = 1;
    for (int i = 2; i <= a && i <= b; i++) {
        while (a % i == 0 || b % i == 0) {
            result = i;
            if (a % i != 0)
                a /= i;
            else
                b /= i;
        }
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << findGCD(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = findIndices(text, target);
    for (int i : indices)
        cout << i << " ";
    return 0;
}