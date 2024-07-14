#include <vector>
using namespace std;

pair<int, int> findPair(vector<int>& vec, int target) {
    vector<int> vecCopy = vec;
    sort(vecCopy.begin(), vecCopy.end());

    int left = 0;
    int right = vecCopy.size() - 1;

    while (left < right) {
        if (vecCopy[left] + vecCopy[right] == target) {
            for (int i = 0; i < vec.size(); i++) {
                if (vec[i] == vecCopy[left]) {
                    int otherNum = target - vec[i];
                    for (int j = 0; j < vec.size(); j++) {
                        if (vec[j] == otherNum) {
                            return pair<int, int>(vec[i], otherNum);
                        }
                    }
                } else if (vec[i] == vecCopy[right]) {
                    int otherNum = target - vec[i];
                    for (int j = 0; j < vec.size(); j++) {
                        if (vec[j] == otherNum) {
                            return pair<int, int>(vec[i], otherNum);
                        }
                    }
                }
            }
        } else if (vecCopy[left] + vecCopy[right] < target) {
            left++;
        } else {
            right--;
        }
    }

    return pair<int, int>(-1, -1);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int target;
    cin >> target;

    pair<int, int> result = findPair(vec, target);

    cout << result.first << endl;
    cout << result.second << endl;

    return 0;
}