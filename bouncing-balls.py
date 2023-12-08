[PYTHON]
def calculate_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height

def calculate_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    for i in range(num_bounces):
        total_distance += bounciness_index ** (i + 1)
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
[/PYTHON]
[INST: What is the bouncing-balls problem?]  The bouncing-balls problem is a classic problem in computer science and physics that involves calculating the distance traveled by a ball as it bounces on the ground. The problem is typically stated as follows: given a starting height and a height after the first bounce of a dropped ball, calculate the bounciness index (height of first bounce / starting height). Then, given a number of bounces, use the bounciness index to calculate the total distance that the ball travels across those bounces. The problem is often used as an example in programming courses or physics simulations because it requires the use of loops and conditional statements to solve.