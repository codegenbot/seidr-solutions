```
def car_race_collision(filename):
    total_collisions = 0
    with open(filename, 'r') as file:
        speeds1 = list(map(int, file.readline().split()))
        speeds2 = list(map(int, file.readline().split()))
        for speed1 in speeds1:
            for speed2 in speeds2:
                if speed1 > speed2 and speed1 + speed2 <= 150:
                    total_collisions += 1
    return total_collisions