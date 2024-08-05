def calculate_bouncing_index(starting_height, first_bounce_height):
    bounciness_index = first_bounce_height / starting_height
    return round(bounciness_index, 3)


def calculate_total_distance(starting_height, first_bounce_height, num_of_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = ((1 + bounciness_index) ** num_of_bounces - 1) * starting_height
    return round(total_distance, 3)


def main():
    starting_height = float(input())
    first_bounce_height = float(input())
    num_of_bounces = int(input())

    bouncing_index = calculate_bouncing_index(starting_height, first_bounce_height)
    total_distance = calculate_total_distance(
        starting_height, first_bounce_height, num_of_bounces
    )

    print(bouncing_index)
    print(total_distance)


if __name__ == "__main__":
    main()