def min_length(all_paths):
    return min(sum(map(int, ''.join(path))) for path in all_paths)

check(min_length(['123', '456', '789']))