

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    # We may assume that all n cars are different, and that all speeds are positive

    dict_of_speeds = {}
    for _ in range(n):
        speed = int(input("Type in the speed of the two-way car:"))
        if speed in dict_of_speeds:
            dict_of_speeds[speed] += 1
        else:
            dict_of_speeds[speed] = 1

    # dict_of_speeds is now a dictionary that maps the speed of a car
    # to the number of cars that speed.
    ## Fill in the following code that uses this dictionary
    # to compute the number of collisions.
    ## Hint:  the number of collisions is the sum of the following
    ##          - for all numbers in dict_of_speeds:
    ##              - the product of the value in dict_of_speeds and the number of
    ##                smaller numbers in dict_of_speeds;
    ##                For example, if the speed of three cars is 3 and the speed of
    ##                four cars is 4, there will be 3*4 = 12 collisions,
    ##                because 3 cars will hit 4 cars before they hit each of the three cars.
    ##                (Here, we are assuming that only two cars can not hit each other,
    ##                as a result of which 12 > 6.)
    ##
    ##  Another way to think about this:  for each one of the n cars that are driving
    ##      left to right, we count the number of cars that are driving faster than it
    ##      among the cars that are driving right to left.  For example, if the speed
    ##      of three cars is 3 and the speed of four cars is 4, we would compute
    ##      3 + 3 + 3 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 + 4 = 48.  This is because
    ##      we have 3 cars with speed 3, and each of them will hit 4 cars that will
    ##      have higher speed.
    ##
    ##  Your final answer is the sum divided by 2.

    num_of_collisions = 0
    for x in dict_of_speeds:
        for y in dict_of_speeds:
            if y < x:
                num_of_collisions += dict_of_speeds[x] * dict_of_speeds[y]

    return num_of_collisions // 2




print(car_race_collision(int(input("Type in the number of cars:"))))

    This function outputs the number of such collisions.
    """
