def car_race_collision(x1, y1, x2, y2):
    if x1 == x2:
        return abs(y1 - y2) <= 0
    m = (y2 - y1) / (x2 - x1)
    b = y1 - m * x1
    return x1 <= x2 and min(x1, x2) >= max((b + m), (-b + m))