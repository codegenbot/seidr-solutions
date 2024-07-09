#include <vector>
using namespace std;

int basement(vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += v[j];
            if (sum < 0) return j;
        }
    }
    return -1;

}

int main() {
    return 0;
}