#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

pair<int, int> compare(vector<int> a, vector<int> b) {
    vector<int> c = a;
    vector<int> d = b;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    if (c.size() < d.size())
        return make_pair(1, 0);
    else if (c.size() > d.size())
        return make_pair(0, 1);
    else
        return make_pair(1, 1);

}

int main(int argc, char* argv[]) {
    vector<int> a;
    vector<int> b;

    if(argc >=3) {
        int n = atoi(argv[1]);
        for(int i=0; i<n; i++) {
            int num = atoi(argv[i+2]);
            a.push_back(num);
        }
        n = atoi(argv[argc-1]);
        for(int i=n; i<argc-1; i++) {
            int num = atoi(argv[i+1]);
            b.push_back(num);
        }
    }

    cout << "Comparing: ";
    for(auto x : a) cout << x << " ";
    cout << " and ";
    for(auto y : b) cout << y << " ";
    cout << endl;
    
    pair<int, int> result = compare(a, b);

    if(result.first == 0 && result.second == 0)
        cout << "The two lists are equal." << endl;
    else
        cout << "List 1 is greater than List 2 if first element is 0, and vice versa." << endl;

    return 0;