#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> sort_third(vector<int> l) {
    vector<int> multiplesOfThree;
    vector<int> others;

    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0)
            multiplesOfThree.push_back(l[i]);
        else
            others.push_back(l[i]);
    }

    sort(multiplesOfThree.begin(), multiplesOfThree.end());

    vector<int> result;
    int i = 0;
    while (i < l.size()) {
        if (i % 3 == 0 && !multiplesOfThree.empty()) {
            int val = multiplesOfThree[0];
            while (!multiplesOfThree.empty()) {
                result.push_back(val);
                for(int k = 0; k < 2; k++) {
                    i += 3;
                    if(!multiplesOfThree.empty())
                        multiplesOfThree.erase(multiplesOfThree.begin());
                }
            }
        } else {
            if(others.size() > 1) {
                result.push_back(others[0]);
                others.erase(others.begin());
            } else if (!others.empty()) {
                result.push_back(others[0]);
                others.pop_back();
            } else
                break;
            i++;
        }
    }

    return result;
}

int main_driver() {
    vector<int> l1 = {3, 2};
    vector<int> l2 = {9, 8, 7, 6, 5, 4, 3, 2};

    cout << "l1: ";
    for (int i : l1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "l2: ";
    for (int i : l2) {
        cout << i << " ";
    }
    cout << endl;

    vector<int> result1 = sort_third(l1);
    vector<int> result2 = sort_third(l2);

    cout << "result1: ";
    for (int i : result1) {
        cout << i << " ";
    }
    cout << endl;

    cout << "result2: ";
    for (int i : result2) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}