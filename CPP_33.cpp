sort(l.begin(), l.end(), [](int a, int b) { return a % 3 == 0 ? a < b : false; });
return l;