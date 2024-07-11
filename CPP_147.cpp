int count = 0;
    for (int i = 1; i <= n; i++) {
        int ai = i * i - i + 1;
        for (int j = i + 1; j <= n; j++) {
            int aj = j * j - j + 1;
            for (int k = j + 1; k <= n; k++) {
                int ak = k * k - k + 1;
                if ((ai + aj + ak) % 3 == 0) {
                    count++;
                }
            }
        }
    }
    return count;
}