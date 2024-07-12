def min_length():
    n = int(input())
    all_paths = [list(map(int, input().split())) for _ in range(n)]
    return min(sum(path) for path in all_paths)