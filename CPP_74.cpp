int total_chars_lst1 = 0, total_chars_lst2 = 0;
    for (const string& str : lst1) {
        total_chars_lst1 += str.length();
    }
    for (const string& str : lst2) {
        total_chars_lst2 += str.length();
    }
    
    return total_chars_lst1 < total_chars_lst2 ? lst1 : lst2;
}