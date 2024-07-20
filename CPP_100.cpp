vector<int> levels;
    while (n > 0) {
        levels.push_back(n);
        n = (n % 2 == 0) ? n + 1 : n + 2;
    }
    return levels;
}