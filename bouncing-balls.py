def bouncing_balls():
    start_height = float(input("Enter the starting height: "))
    first_bounce_height = float(input("Enter the height after the first bounce: "))
    num_bounces = int(input("Enter the number of bounces: "))

    bounciness_index = first_bounce_height / start_height

    total_distance = 0
    for _ in range(num_bounces):
        height = start_height * (bounciness_index ** (_ + 1))
        if _ == 0:
            total_distance += 2 * abs(height - start_height)
        else:
            total_distance += 2 * abs(height - start_height)
    print("The total distance traveled is: ", round(total_distance, 2))


if __name__ == "__main__":
    bouncing_balls()