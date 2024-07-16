for (int i = 0; i < xs.size(); ++i) {
    xs[i] *= i;
}
xs.erase(xs.begin());
return xs;