def minTimeToVisitAllPoints(points):
    n = len(points)
    res = 0
    for i in range(1, n):
        x1, y1 = points[i-1]
        x2, y2 = points[i]
        dx = abs(x2 - x1)
        dy = abs(y2 - y2)
        res += max(dx, dy) + 1
    return res