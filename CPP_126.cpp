return is_sorted(begin(lst), end(lst)) && adjacent_find(begin(lst), end(lst)) == end(lst);
}