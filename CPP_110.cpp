string exchange(vector<int> lst1, vector<int> lst2) {
    int even_count = 0;
    for (int num : lst1) {
        if (num % 2 == 0) {
            even_count++;
        }
    }
    
    for (int num : lst1) {
        if (num % 2 != 0 && even_count > 0) {
            return "YES";
        } else if (num % 2 != 0 && even_count == 0) {
            return "NO";
        }
        
        while (even_count > 0 && !lst2.empty()) {
            int num2 = lst2.back();
            lst2.pop_back();
            if (num2 % 2 == 0) {
                even_count--;
            } else {
                lst1.push_back(num2);
                break;
            }
        }
    }
    
    return "YES";
}