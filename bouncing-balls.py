def calculate_bounciness(starting_height, first_bounce_height):
    return first_bounce_height / starting_height

def calculate_total_distance(bounciness, num_bounces):
    total_distance = 0
    for i in range(num_bounces):
        total_distance += bounciness ** (i + 1)
    return total_distance

def main():
    starting_height = float(input("Enter the starting height of the ball: "))
    first_bounce_height = float(input("Enter the height after the first bounce: "))
    num_bounces = int(input("Enter the number of bounces: "))
    bounciness = calculate_bounciness(starting_height, first_bounce_height)
    total_distance = calculate_total_distance(bounciness, num_bounces)
    print("The total distance traveled by the ball is:", total_distance)

if __name__ == "__main__":
    main()