```
import math

def calculate_bounciness(starting_height, first_bounce_height):
    return first_bounce_height / starting_height

def calculate_total_distance(starting_height, bounciness, num_bounces):
    distance = 0.0
    for i in range(num_bounces):
        distance += (1.0 + bounciness) ** i
    return distance * starting_height

def main():
    starting_height = float(input("Enter starting height: "))
    first_bounce_height = float(input("Enter first bounce height: "))
    num_bounces = int(input("Enter number of bounces: "))

    bounciness = calculate_bounciness(starting_height, first_bounce_height)
    total_distance = calculate_total_distance(starting_height, bounciness, num_bounces)

    print("Total distance: {0}".format(total_distance))

if __name__ == "__main__":
    main()