for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
    x, y = 0, 0
    x, y = (max(0, min(N - 1, x + dx)), max(0, min(N - 1, y + dy)))