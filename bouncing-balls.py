def get_bounciness(starting_height, height_after_first_bounce):
    return height_after_first_bounce / starting_height

def get_total_distance(num_bounces, bounciness):
    distance = 0.0
    for i in range(num_bounces):
        distance += (1 - bounciness ** (i + 1)) / (1 - bounciness)
    return distance

def main():
    starting_height = float(input("Enter the starting height: "))
    height_after_first_bounce = float(input("Enter the height after the first bounce: "))
    num_bounces = int(input("Enter the number of bounces: "))

    bounciness = get_bounciness(starting_height, height_after_first_bounce)
    total_distance = get_total_distance(num_bounces, bounciness)

    print("The bounciness index is:", bounciness)
    print("The total distance traveled by the ball is:", total_distance)

if __name__ == "__main__":
    main()