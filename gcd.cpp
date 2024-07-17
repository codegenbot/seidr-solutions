#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; ; i++) {
        int j = 0;
        while (i + j < n && i + j < m) {
            if (text.substr(i, j).find(target) != string::npos)
                result.push_back(i);
            j++;
        }
        if (i >= n - m)
            break;
        i += m;
    }

    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}