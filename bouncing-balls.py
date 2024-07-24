def calculate_bounciness(start_height, first_bounce):
    bounciness = (first_bounce / start_height) ** 0.5
    return round(bounciness, 3)


def calculate_distance(start_height, first_bounce, num_bounces):
    bounciness = calculate_bounciness(start_height, first_bounce)
    distance = 0
    for _ in range(num_bounces):
        start_height = (start_height * bounciness) ** 2
        distance += start_height - ((start_height * bounciness) ** 2)
    return round(distance, 3)


if __name__ == "__main__":
    start_height = float(input())
    first_bounce = float(input())
    num_bounces = int(input())

    print(calculate_distance(start_height, first_bounce, num_bounces))