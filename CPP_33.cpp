vector<int> l_copy = l;
for (int i = 0; i < l.size(); i += 3) {
    sort(l_copy.begin() + i, l_copy.begin() + i + 3);
}
return l_copy;