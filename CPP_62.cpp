for (int i = 1; i < xs.size(); ++i) {
    xs[i - 1] = xs[i] * i;
}
xs.pop_back();
return xs;