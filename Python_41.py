def car_race_collision(n: int, speeds: List[int], times: List[int]) -> int:
    return sum(speed * time for speed, time in zip(speeds, times))