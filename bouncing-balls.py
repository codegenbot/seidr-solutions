[PYTHON]
def calculate_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height

def calculate_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    for i in range(num_bounces):
        total_distance += bounciness_index ** (i + 1) * starting_height
    return total_distance

def main():
    starting_height = float(input("Enter the starting height of the ball: "))
    first_bounce_height = float(input("Enter the height after the first bounce: "))
    num_bounces = int(input("Enter the number of bounces: "))

    bounciness_index = calculate_bounciness_index(starting_height, first_bounce_height)
    total_distance = calculate_total_distance(bounciness_index, num_bounces)

    print("The total distance traveled by the ball is:", total_distance)

if __name__ == "__main__":
    main()