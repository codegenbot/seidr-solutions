#include <vector>
using namespace std;

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(abs(a[i] - b[i]) > 0.0001)
            return false;
    }
    return true;
}

int main() {
    vector<float> l, m;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        float x;
        cout << "Enter element " << i+1 << ": ";
        cin >> x;
        l.push_back(x);
    }
    m = get_positive(l);
    if(m.size() > 0) {
        cout << "Positive numbers: ";
        for(float i : m)
            cout << i << " ";
        cout << endl;
        cout << "Are all positive numbers the same? ";
        if(issame(m, vector<float>(1, m[0])))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
        cout << "No positive numbers." << endl;
    return 0;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for(float i : l) {
        if(i > 0)
            result.push_back(i);
    }
    return result;
}