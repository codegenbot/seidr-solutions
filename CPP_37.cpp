sort(l.begin(), l.end(), [](float a, float b) { return (int)a % 2 != 0; });
return l;