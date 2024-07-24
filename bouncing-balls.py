def calculate_bounciness(start_height, first_bounce_height):
    return first_bounce_height / start_height


def calculate_total_distance(bounces, bounciness_index):
    total_distance = 0
    for i in range(1, bounces + 1):
        total_distance += bounciness_index ** (i)
    return total_distance


start_height = float(input())
first_bounce_height = float(input())
bounces = int(input())

bounciness = calculate_bounciness(start_height, first_bounce_height)
total_dist = calculate_total_distance(bounces, bounciness)

print(f"{total_dist:.4f}")