int n = l.size();
bool increasing = true;
bool decreasing = true;
for (int i = 1; i < n; ++i) {
    if (l[i] < l[i - 1]) {
        increasing = false;
    } else if (l[i] > l[i - 1]) {
        decreasing = false;
    }
}
return increasing || decreasing;
}