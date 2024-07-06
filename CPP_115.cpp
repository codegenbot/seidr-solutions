int buckets_needed = 0;
for (const auto& row : grid) {
    int row_fill = std::accumulate(row.begin(), row.end(), 0);
    if (row_fill > 0) {
        int needed_buckets = (row_fill + capacity - 1) / capacity;
        buckets_needed += needed_buckets;
    }
}