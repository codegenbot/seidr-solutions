int total_chars_lst1 = 0;
    for (const string& s : lst1) {
        total_chars_lst1 += s.size();
    }

    int total_chars_lst2 = 0;
    for (const string& s : lst2) {
        total_chars_lst2 += s.size();
    }

    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }
}