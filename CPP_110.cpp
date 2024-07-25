Here's the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int evenCount = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    swap(num, num2);
                    found = true;
                    break;
                }
            }
            if (!found) {
                return "NO";
            }
        }
    }
    return evenCount == lst1.size() ? "YES" : "NO";
}