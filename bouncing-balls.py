```
def bouncing_balls():
    start_height = float(input("Enter starting height: "))
    first_bounce_height = float(input("Enter height after the first bounce: "))
    bounciness_index = first_bounce_height / start_height
    num_bounces = int(input("Enter number of bounces: "))

    total_distance = 0

    for _ in range(num_bounces):
        current_height = abs(start_height * (0.5 ** ((_ + 1) // 2)) * bounciness_index)
        total_distance += 2 * abs(current_height)

    print(f"Total distance: {total_distance}")

if __name__ == "__main__":
    bouncing_balls()