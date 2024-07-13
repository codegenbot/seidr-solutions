def bouncing_balls():
    start_height = float(input("Enter the starting height: "))
    first_bounce_height = float(input("Enter the height after the first bounce: "))
    num_bounces = int(input("Enter the number of bounces: "))

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    prev_height = start_height
    for _ in range(num_bounces):
        height = start_height * (bounciness_index ** (_ + 1))
        bounce_height = (start_height * bounciness_index) / 2
        total_distance += abs(height - prev_height) + abs(height - prev_height)
        prev_height = height

    print("The total distance traveled is: ", round(total_distance, 2))


if __name__ == "__main__":
    bouncing_balls()