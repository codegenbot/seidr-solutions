return equal(q.begin(), q.end(), q.rbegin()) && accumulate(q.begin(), q.end(), 0) <= w;
}