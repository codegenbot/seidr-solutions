#include <vector>
using namespace std;

int basement(vector<int>& v) {
    int total = 0;
    for (int i = 0; i < v.size(); i++) {
        total += v[i];
        if (total < 0)
            return i;
    }
    return -1;
}

int main() {
    vector<int> v = {-2, 3, 4, -5};
    int result = basement(v);
    cout << "The first basement index is: " << result << endl;
    return 0;
}