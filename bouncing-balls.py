def calculate_bounciness(starting_height, first_bounce_height):
    return first_bounce_height / starting_height


def calculate_total_distance(starting_height, bounciness_index, num_bounces):
    total_distance = 0
    current_height = starting_height

    for i in range(num_bounces):
        if i == 0:
            continue
        total_distance += abs(current_height - first_bounce_height)
        current_height *= bounciness_index

    return total_distance


def main():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = calculate_bounciness(starting_height, first_bounce_height)
    total_distance = calculate_total_distance(
        starting_height, bounciness_index, num_bounces
    )

    print(f"{total_distance:.6f}")


if __name__ == "__main__":
    main()