int sum = 0;
bool balanced = true;
for (int i = 0; i < q.size() / 2; i++) {
    if (q[i] != q[q.size() - i - 1]) {
        balanced = false;
        break;
    }
}
for (int i = 0; i < q.size(); i++) {
    sum += q[i];
}
return balanced && sum <= w;
}