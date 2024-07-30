int sum = 0;
for (int op : operations) {
    sum += op;
    if (sum < 0) {
        return true;
    }
}
return false;
}