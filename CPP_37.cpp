vector<float> even_numbers;
    vector<float> sorted_even_numbers;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            even_numbers.push_back(l[i]);
            sorted_even_numbers.push_back(l[i]);
        }
    }
    sort(sorted_even_numbers.begin(), sorted_even_numbers.end());
    int count = 0;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            l[i] = sorted_even_numbers[count];
            count++;
        }
    }
    return l;
}