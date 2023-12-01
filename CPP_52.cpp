return all_of(l.begin(), l.end(), [t](int num) { return num < t; });
}