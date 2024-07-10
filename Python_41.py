```
def calculate_collision_rate(tracks):
    collisions = 0
    for i in range(0, tracks):
        if (i == int((tracks - 1) / 3)) or (i == 2 * int((tracks - 1) / 3)):
            collisions += 1
    return collisions / tracks if tracks > 0 else 0