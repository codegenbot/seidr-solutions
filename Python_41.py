import sys



def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.

    # TODO: Complete the following code given the task description and function signature.

    # Hint:
    #   - It is possible to solve this problem without sorting the input.
    #   - You may use O(n) extra space.
    #   - You may assume that the input is valid.

    left_to_right = []
    right_to_left = []

    for i in range(n):
        left_to_right.append(int(sys.stdin.readline()))

    for i in range(n):
        right_to_left.append(int(sys.stdin.readline()))

    left_to_right.sort()
    right_to_left.sort()

    collisions = 0
    for i in range(n):
        if left_to_right[i] > right_to_left[i]:
            collisions += 1

    return collisions


if __name__ == "__main__":
    n = int(sys.stdin.readline())
    print(car_race_collision(n))

    This function outputs the number of such collisions.
    """
