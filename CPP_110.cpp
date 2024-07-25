string exchange(vector<int> lst1, vector<int> lst2) {
    bool isEven = false;
    for(int i : lst1) {
        if(i % 2 != 0) {
            isEven = true;
            break;
        }
    }

    if(isEven) return "YES";
    else {
        for(int i : lst2) {
            if(i % 2 == 0) {
                int temp = lst1[0];
                lst1[0] = i;
                lst2[0] = temp;
                break;
            }
        }

        bool allEven = true;
        for(int i : lst1) {
            if(i % 2 != 0) {
                allEven = false;
                break;
            }
        }

        return allEven ? "YES" : "NO";
    }
}