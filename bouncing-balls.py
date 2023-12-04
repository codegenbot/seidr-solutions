import math

def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (starting_height + i * bounciness_index) * 2
    return total_distance

def main():
    print("Enter the starting height of the ball: ")
    starting_height = float(input())
    print("Enter the height after the first bounce: ")
    first_bounce_height = float(input())
    print("Enter the number of bounces: ")
    num_bounces = int(input())
    total_distance = bouncing_balls(starting_height, first_bounce_height, num_bounces)
    print(f"The total distance traveled by the ball is {total_distance}")

if __name__ == "__main__":
    main()