def calculate_bouncing_index(start_height, first_bounce_height):
    return first_bounce_height / start_height


def calculate_total_distance(start_height, bounciness_index, num_bounces):
    distance = 0
    height = start_height
    for _ in range(num_bounces):
        distance += (height - math.sqrt(height * 2)) + height
        height *= bounciness_index
    return distance


def main():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = calculate_bouncing_index(start_height, first_bounce_height)
    total_distance = calculate_total_distance(
        start_height, bounciness_index, num_bounces
    )

    print(f"{total_distance:.4f}")


if __name__ == "__main__":
    main()