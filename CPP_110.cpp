Here is the completed code:

string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            even_count++;
        }
    }
    bool can_exchange = false;
    for (int num : lst2) {
        if (num % 2 == 0 && !can_exchange) {
            can_exchange = true;
        } else if (num % 2 != 0 && can_exchange) {
            return "NO";
        }
    }
    return even_count > 0 ? "YES" : "NO";
}