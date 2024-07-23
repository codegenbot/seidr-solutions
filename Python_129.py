def shortestWallDistance(walls):
    if len(walls) < 2:
        return []
    min_distance = float("inf")
    min_path = []

    for i in range(1, len(walls) - 1):
        path_length = 0
        prev_x = walls[i - 1][0]
        for j in range(i + 1, len(walls)):
            path_length += abs(walls[j][0] - prev_x)
            prev_x = walls[j][0]
        min_distance = min(min_distance, path_length)
        if path_length < min_distance:
            min_path = [walls[i - 1], walls[-1]]
    return [(min_path[0][0], 0), (min_path[1][0], 2)] + [
        (x, 1) for x in range(min_path[0][0] + 1, min_path[1][0])
    ]