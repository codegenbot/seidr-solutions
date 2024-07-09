vector<int> levels;
    for (int i = 0; i < n; i++) {
        levels.push_back(n + i*2);
        n = n % 2 == 0 ? n + 1 : n + 2;
    }
    return levels;
}