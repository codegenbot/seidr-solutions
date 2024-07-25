Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            even_count++;
        } else {
            bool found_even = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    swap(lst1[even_count], lst2[lst2.size() - lst2.size() - (even_count)]);
                    found_even = true;
                    break;
                }
            }
            if (!found_even) {
                return "NO";
            }
        }
    }
    return "YES";
}