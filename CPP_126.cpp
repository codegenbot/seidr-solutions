return is_sorted_until(lst.begin(), lst.end(), [](int a, int b){ return (a == b); }) == lst.end();
}