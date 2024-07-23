vector<int> sorted_third;
    vector<int> divisible_by_three;

    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            divisible_by_three.push_back(l[i]);
        } else {
            sorted_third.push_back(l[i]);
        }
    }

    sort(divisible_by_three.begin(), divisible_by_three.end());

    int j = 0;
    for (int i = 0; i < l.size(); ++i) {
        if (i % 3 == 0) {
            sorted_third.push_back(divisible_by_three[j]);
            j++;
        }
    }

    return sorted_third;
}