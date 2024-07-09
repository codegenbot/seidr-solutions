long long sum = 0;
for (int i = 0; i < lst.size(); i++) {
    sum += pow((lst[i] - floor(lst[i])), 2);
}
return sum;