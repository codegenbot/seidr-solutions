```cpp
#include <vector>
using namespace std;
#include <string>

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for(int i=0; i<=n-m; i++){
        if(text.substr(i,m).compare(target) == 0){
            result.push_back(i);
            while (i + m <= n && text.substr(i, m).compare(target) == 0)
                i++;
        }
    }

    return result;
}

int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}