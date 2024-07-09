```
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height
    total_distance = 0

    start_height = first_bounce_height
    is_even = True

    for _ in range(num_bounces):
        if is_even:
            total_distance += 2 * start_height
        else:
            total_distance += 4 * start_height
        start_height *= (bounciness_index**0.5)
        is_even = not is_even

    print(total_distance)


if __name__ == "__main__":
    bouncing_balls()