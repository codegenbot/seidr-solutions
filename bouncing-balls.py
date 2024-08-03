def calculate_bouncing_balls():
    starting_height = float(input())
    height_after_first_bounce = float(input())
    bounciness_index = height_after_first_bounce / starting_height
    num_of_bounces = int(input())

    total_distance = 0
    for i in range(1, num_of_bounces + 1):
        total_distance += abs(starting_height * (1 - 0.5) ** i)

    return bounciness_index, total_distance


bounciness_index, total_distance = calculate_bouncing_balls()
print(f"{bounciness_index:.4f}")
print(int(total_distance))