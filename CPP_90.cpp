#include <vector>
int next_smallest(vector<int>& lst) {
    if (lst.size() < 2) {
        return -1;
    }
    
    sort(lst.begin(), lst.end());
    int count = 0;
    int prev = lst[0];
    for (int num : lst) {
        if (num != prev) {
            count++;
            if (count == 2) {
                return num;
            }
            prev = num;
        }
    }
    return -1;
}

// Invoke next_smallest with input vector { -35, 34, 12, -45 }
vector<int> input = { -35, 34, 12, -45 };
int result = next_smallest(input);