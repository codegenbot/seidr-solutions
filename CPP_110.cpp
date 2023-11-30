string exchange(vector<int> lst1, vector<int> lst2) {
    int count = 0;

    // Count the number of odd numbers in lst1
    for (int i = 0; i < lst1.size(); i++) {
        if (lst1[i] % 2 != 0) {
            count++;
        }
    }

    // If there are no odd numbers in lst1, return "YES"
    if (count == 0) {
        return "YES";
    }

    // Check if there are enough even numbers in lst2 to exchange with the odd numbers in lst1
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 == 0) {
            count--;
        }
    }

    // If all the odd numbers in lst1 can be exchanged with even numbers in lst2, return "YES"
    if (count <= 0) {
        return "YES";
    } else {
        return "NO";
    }
}