Here is the solution:

int count_nums(vector<int> n) {
    int count = 0;
    for (int i : n) {
        if (i < 0) {
            i = -i;
        }
        bool has_positive_sum = false;
        while (i > 0) {
            int digit = i % 10;
            i /= 10;
            if (digit > 0) {
                has_positive_sum = true;
                break;
            }
        }
        if (has_positive_sum) {
            count++;
        }
    }
    return count;