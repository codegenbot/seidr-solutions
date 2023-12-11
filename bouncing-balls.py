def calculate_bounciness(starting_height, first_bounce_height):
    return first_bounce_height / starting_height

def calculate_total_distance(num_bounces, bounciness):
    total_distance = 0.0
    for i in range(num_bounces):
        total_distance += (1 - bounciness) ** i
    return total_distance * starting_height

def main():
    starting_height = float(input("Enter the starting height of the ball: "))
    first_bounce_height = float(input("Enter the height after the ﬁrst bounce of the dropped ball: "))
    num_bounces = int(input("Enter the number of bounces: "))
    bounciness = calculate_bounciness(starting_height, first_bounce_height)
    total_distance = calculate_total_distance(num_bounces, bounciness)
    print("The total distance that the ball travels across", num_bounces, "bounces is: ", total_distance)

if __name__ == "__main__":
    main()