from functools import reduce


def car_race_collision():
    n = int(input("Enter the number of cars: "))
    inputs = input(f"Enter {n} pairs of speeds and damages (space-separated): ")
    speeds, damages = zip(
        *[
            list(map(int, pair.split()))
            for pair in [inputs[i : i + 2] for i in range(0, len(inputs), 2)]
        ]
    )
    total_damage = sum(damage * speed for damage, speed in zip(damages, speeds))
    return str(total_damage)


print(car_race_collision())