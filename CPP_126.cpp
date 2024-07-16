return is_sorted(lst.begin(), lst.end()) && count_if(lst.begin(), lst.end(), [](int x){ return count(lst.begin(), lst.end(), x) <= 1; }) == lst.size();
}