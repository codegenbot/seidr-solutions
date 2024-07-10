int exchange(vector<int> lst1, vector<int> lst2) {
    int flag = 0;
    for (int num : lst1) {
        if (num % 2 != 0) {
            bool found = false;
            for (int num2 : lst2) {
                if (num2 % 2 == 0) {
                    swap(lst1[stoi(to_string(num))], lst2[stoi(to_string(num2))]);
                    found = true;
                    flag = 1;
                    break;
                }
            }
            if (!found && flag == 0) return 0;
        }
    }
    return 1;
}