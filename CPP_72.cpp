bool will_it_fly(std::vector<int> q, int w) {
    return std::accumulate(q.begin(), q.end(), 0) <= w;