#include <vector>
#include <set>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

int main() {
    vector<int> l1 = {1,2,3};
    vector<int> l2 = {1,2,3};
    if(issame(l1,l2)) {
        vector<int> result = common(l1, l2);
        for(int i: result) {
            cout << i << " ";
        }
        cout << endl;
    } else {
        cout << "Vectors are not same." << endl;
    }

    return 0;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> intersection;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                      std::inserter(intersection, intersection.end()));

    vector<int> result(intersection.begin(), intersection.end());
    return result;
}