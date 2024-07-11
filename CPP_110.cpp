Here is the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            even_count++;
        }
    }
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 == 0) {
            lst1.push_back(lst2[i]);
            lst2.erase(lst2.begin() + i);
            i--;
        }
    }
    return even_count == lst1.size() ? "YES" : "NO";
}