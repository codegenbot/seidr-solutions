def car_race_collision(n: int):
    collision = []
    for i in range(1, n + 1):
        for j in range(i, n + 1):
            if i != j:
                collision.append((i, j))
    return len(collision) + 1