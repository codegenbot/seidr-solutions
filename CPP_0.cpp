#include <vector>
#include <assert.h>

using namespace std;

int has_close_elements(vector<float> v, float epsilon) {
    for (size_t i = 0; i < v.size() - 1; ++i)
        if ((v[i] >= v[i + 1] - epsilon) && (v[i] <= v[i + 1] + epsilon))
            return true;
    return false;
}

int main() {
    vector<float> a;
    float num;
    cout << "Enter the numbers (enter 'stop' to stop entering numbers):" << endl;
    while(true)
    {
        cin >> num;
        if(string("stop") == string(cin.peek(),string::nter()))
            break;
        a.push_back(num);
    }
    assert(has_close_elements(a, 0.5) == false);
    return 0;
}