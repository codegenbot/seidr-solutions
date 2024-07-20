int total_chars_lst1 = 0;
    for (const auto& str : lst1) {
        total_chars_lst1 += str.size();
    }

    int total_chars_lst2 = 0;
    for (const auto& str : lst2) {
        total_chars_lst2 += str.size();
    }

    if (total_chars_lst1 < total_chars_lst2) {
        return lst1;
    } else {
        return lst2;
    }