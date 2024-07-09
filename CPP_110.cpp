Here's the solution:

string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0)
            even_count++;
    }
    
    for (int num : lst1) {
        if (num % 2 != 0 && count(lst2.begin(), lst2.end(), num))
            return "NO";
    }
    
    int odd_count = lst1.size() - even_count;
    
    if (odd_count <= count_if(lst2.begin(), lst2.end(), [](int x) { return x % 2 != 0 }))
        return "YES";
    
    return "NO";
}