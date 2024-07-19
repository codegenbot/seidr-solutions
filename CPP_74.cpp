if (lst1.size() == 0 && lst2.size() == 0) {
    return {};
}

int sum_lst1 = 0;
for (const string& s : lst1) {
    sum_lst1 += s.size();
}

int sum_lst2 = 0;
for (const string& s : lst2) {
    sum_lst2 += s.size();
}

return sum_lst1 < sum_lst2 ? lst1 : sum_lst2 < sum_lst1 ? lst2 : lst1;