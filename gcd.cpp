#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int targetLength = target.length();
    for(int i=0; i<=text.length()-targetLength; i++) {
        if(text.substr(i, targetLength) == target)
            indices.push_back(i);
    }
    return indices;
}

int main() {
    int a,b;
    cin>>a>>b;
    int gcd = __gcd(a,b);
    cout<<gcd<<endl;

    string text,target;
    cin>>text>>target;
    vector<int> result = findIndices(text, target);
    for(int i: result)
        cout << i << " ";
    return 0;
}