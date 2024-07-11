#include <vector>
#include <algorithm>

using namespace std;

int compare(vector<int> a, vector<int> b) {
    vector<int> c = a;
    vector<int> d = b;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    if (c.size() < d.size())
        return -1;
    else if (c.size() > d.size())
        return 1;
    else
        {
            for(int i=0;i<c.size();i++){
                if(c[i]<d[i])
                    return -1;
                else if(c[i]>d[i])
                    return 1;
            }
            return 0;
        }
}