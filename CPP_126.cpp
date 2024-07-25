return unique(lst.begin(), lst.end()) == lst.end() && is_sorted_until(lst.begin(), lst.end()) == lst.end();
}