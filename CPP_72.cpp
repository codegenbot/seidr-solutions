int sum = 0;
for (int num : q) {
    sum += num;
}

if (q == vector<int>(q.rbegin(), q.rend()) && sum <= w) {
    return true;
}
return false;