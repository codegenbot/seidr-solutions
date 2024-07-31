using namespace std;

bool issame(vector<string> a, vector<string>b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}