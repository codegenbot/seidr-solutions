sort(l.begin(), l.end(), [](int a, int b){return a%3 == 0 && b%3 == 0 ? a < b : a%3 == 0;});
return l;