def dice_probability(peter_sides, colin_sides):
    peter_max = peter_sides
    colin_max = colin_sides
    total_cases = peter_sides * colin_sides
    peter_wins = 0
    for i in range(1, peter_max + 1):
        for j in range(1, colin_max + 1):
            if i > j:
                peter_wins += 1
    return peter_wins / total_cases