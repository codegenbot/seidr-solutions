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
    if(argc >=3) {
        vector<int> a = vector<int>();
        for(int i=2; i<argc; i++) {
            int num = atoi(argv[i]);
            a.push_back(num);
        }
        if(argc == 3)
            cout << compare(a, {stoi(argv[1]),})[0] << endl;
        else
            cout << compare(a, vector<int>({stoi(argv[1]),})) [0]<<endl;
    }
    
    return 0;