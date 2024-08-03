#include <vector>
#include <string>

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textLen = text.length();
    int targetLen = target.length();

    for (int i = 0; ; i++) {
        if (i + targetLen > textLen)
            break;

        bool match = true;
        for (int j = 0; j < targetLen; j++) {
            if (text[i + j] != target[j])
                match = false;
        }

        if (match) {
            result.push_back(i);
            i += targetLen - 1; // Overlapping, skip the last part
        }
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