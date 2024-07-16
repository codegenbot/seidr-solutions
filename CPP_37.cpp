sort(l.begin(), l.end(), [](float a, float b) { return ((int)a % 2 == 0 && (int)b % 2 == 0) ? a < b : false; });
return l;
}