
def findMinPath(i, j, k):
    queue = [(i, j)]
    visited = set()
    while queue:
        (i, j) = queue.pop(0)
        if not (0 <= i < n and 0 <= j < m) or visited.add((i, j)):
            continue
        for (i2, j2) in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if not (0 <= i2 < n and 0 <= j2 < m) or visited.add((i2, j2)):
                continue
            queue.append((i2, j2))
        visited.add((i, j))
    return min(queue, key=lambda x: grid[x[0]][x[1]])