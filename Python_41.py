

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    # left_to_right_x = [2, 4, 6, 8]
    # right_to_left_x = [9, 7, 5, 3]
    left_to_right_x = []
    right_to_left_x = []
    collision_counter = 0
    for i in range(0, n):
        left_to_right_input = int(input("Enter left to right coordinates: "))
        right_to_left_input = int(input("Enter right to left coordinates: "))
        if left_to_right_input < right_to_left_input:
            left_to_right_x.append(left_to_right_input)
            right_to_left_x.append(right_to_left_input)
            collision_counter += 1
        else:
            left_to_right_x.append(left_to_right_input)
            right_to_left_x.append(right_to_left_input)

    print(collision_counter)
    print(left_to_right_x)
    print(right_to_left_x)


print(car_race_collision(4))

    This function outputs the number of such collisions.
    """
