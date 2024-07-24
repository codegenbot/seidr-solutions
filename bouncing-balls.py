def solve():
    starting_height = float(input())
    bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = bounce_height / starting_height

    if bounciness_index == 1:
        total_distance = starting_height + (num_bounces - 1) * (2 * starting_height)
    else:
        total_distance = starting_height + (
            bounciness_index * (1 - bounciness_index) ** (num_bounces - 1)
        ) * (starting_height / (1 - bounciness_index))

    print(total_distance)


solve()