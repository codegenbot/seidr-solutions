#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l){
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

int main(){
    // Test your code here
    return 0;
}