string result;
for (int i = 0; i <= n; ++i) {
    result += to_string(i) + (i == n ? "" : " ");
}
return result;