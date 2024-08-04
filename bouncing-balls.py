def calculate_bouncing_index(start_height, bounce_height):
    return bounce_height / start_height


def calculate_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    for _ in range(num_bounces):
        total_distance += 1 + bounciness_index
    return total_distance


if __name__ == "__main__":
    start_height = float(input())
    bounce_height = float(input())
    num_bounces = int(input())

    bouncing_index = calculate_bouncing_index(start_height, bounce_height)
    total_distance = calculate_total_distance(bouncing_index, num_bounces)

    print("{:.3f}".format(total_distance))