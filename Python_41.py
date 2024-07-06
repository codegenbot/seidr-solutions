def car_race_collision(participants: int):
    total_distance = 0
    for i in range(1, participants + 1):
        total_distance += i
    return total_distance