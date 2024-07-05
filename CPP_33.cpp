vector<int> result = l;
    vector<int> to_sort;

    // Collect elements at indices divisible by 3
    for (size_t i = 0; i < l.size(); i += 3) {
        to_sort.push_back(l[i]);
    }

    // Sort the collected elements
    sort(to_sort.begin(), to_sort.end());

    // Place sorted elements back into the result vector
    for (size_t i = 0; i < to_sort.size(); ++i) {
        result[i * 3] = to_sort[i];
    }

    return result;
}