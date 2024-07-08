#include <algorithm>
using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0 || l[i] % 3 != 0) {
            result.push_back(l[i]);
        } else {
            int temp = 0;
            for (int j = 0; j < l.size(); j++) {
                if (j % 3 == 0 && l[j] % 3 == 0) {
                    if (temp == 0 || l[j] < temp) {
                        temp = l[j];
                    }
                }
            }
            result.push_back(temp);
        }
    }
    return result;
}