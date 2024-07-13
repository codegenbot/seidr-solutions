#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int len = target.length();
    for(int i=0; i<=(text.length()-len);i++) {
        if(text.substr(i,len) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int gcd(int a, int b) {
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndices(text, target);
    for(int i=0; i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}