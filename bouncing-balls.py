```Python
def bouncing_balls():
    start_height = float(input())
    first_bounce_height = float(input())
    num_bounces = int(input())

    bounciness_index = first_bounce_height / start_height

    total_distance = 0.5 * (start_height + first_bounce_height)
    for _ in range(num_bounces):
        new_height = (total_distance + int(total_distance * bounciness_index)) / 2
        total_distance += new_height
    print(f"The ball travels a total distance of {total_distance:.8f} meters.")


bouncing_balls()