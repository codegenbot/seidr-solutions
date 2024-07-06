def car_race_collision(spe, tim):
    count = 0
    for i in range(len(spe)):
        for j in range(i + 1, len(spe)):
            if spe[i] > spe[j] and tim[i] < tim[j]:
                count += 1
    return count