if (n == 0)
    return {0};
if (n == 1)
    return {3, 3};
vector<int> res = {3, 3};
for (int i = 2; i <= n; ++i) {
    if (i % 2 == 0)
        res.push_back(1 + i / 2);
    else
        res.push_back(res[i - 1] + res[i - 2] + res[i + 1]);
}
return res;
}