for (auto &num : x) {
    string s = to_string(num);
    if (any_of(s.begin(), s.end(), [](char c) { return c % 2 == 0; })) {
        num = -1;
    }
}
x.erase(remove(x.begin(), x.end(), -1), x.end());
sort(x.begin(), x.end());
return x;