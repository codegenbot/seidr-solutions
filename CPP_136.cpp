#include<vector>
#include<algorithm>
using namespace std;

vector<int> largest_smallest_integers(vector<int> lst){
    vector<int> result = {0, 0};
    vector<int> negatives;
    vector<int> positives;

    for (int num : lst) {
        if (num < 0) {
            negatives.push_back(num);
        } else if (num > 0) {
            positives.push_back(num);
        }
    }

    if (!negatives.empty()) {
        result[0] = *max_element(negatives.begin(), negatives.end());
    }
    if (!positives.empty()) {
        result[1] = *min_element(positives.begin(), positives.end());
    }

    return result;
}