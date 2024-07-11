sort(l.begin() + 1, l.end(), [](float a, float b) { return (int)a < (int)b; });
return l;
}