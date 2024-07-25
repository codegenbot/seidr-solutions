#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.length(), m = target.length();
    for (int i = 0; ; i++) {
        if (i + m > n)
            break;
        int j = 0;
        while (j < m && text[i+j] == target[j])
            j++;
        if (j == m) 
            indices.push_back(i);
        i += j;
    }
    return indices;
}

int gcd(int a, int b) {
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for (int i : result)
        cout << i << " ";
    return 0;
}