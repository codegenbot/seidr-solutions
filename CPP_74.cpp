vector<string> total_match(vector<string> lst1,vector<string> lst2){
    int total1 = 0;
    int total2 = 0;

    for (int i = 0; i < lst1.size(); i++) {
        for (int j = 0; j < lst1[i].size(); j++) {
            total1++;
        }
    }

    for (int i = 0; i < lst2.size(); i++) {
        for (int j = 0; j < lst2[i].size(); j++) {
            total2++;
        }
    }

    if (total1 < total2) {
        return lst1;
    } else {
        return lst2;
    }
}