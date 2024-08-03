def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    current_height = first_bounce_height
    for _ in range(num_bounces):
        total_distance += 2 * (starting_height + current_height)
        current_height *= bounciness_index
    return total_distance


def main():
    starting_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())
    print(bouncing_balls(starting_height, first_bounce_height, num_bounces))


if __name__ == "__main__":
    main()