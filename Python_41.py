

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
    # Hint: You may want to use a dictionary to keep track of the cars.
    # Hint: You may want to use a list to keep track of the cars.
    # Hint: You may want to use a set to keep track of the cars.
    # Hint: You may want to use a tuple to keep track of the cars.
    # Hint: You may want to use a list of lists to keep track of the cars.
    # Hint: You may want to use a list of tuples to keep track of the cars.
    # Hint: You may want to use a list of sets to keep track of the cars.
    # Hint: You may want to use a tuple of lists to keep track of the cars.
    # Hint: You may want to use a tuple of tuples to keep track of the cars.
    # Hint: You may want to use a tuple of sets to keep track of the cars.
    # Hint: You may want to use a set of lists to keep track of the cars.
    # Hint: You may want to use a set of tuples to keep track of the cars.
    # Hint: You may want to use a set of sets to keep track of the cars.
    # Hint: You may want to use a dictionary of lists to keep track of the cars.
    # Hint: You may want to use a dictionary of tuples to keep track of the cars.
    # Hint: You may want to use a dictionary of sets to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries to keep track of the cars.
    # Hint: You may want to use a dictionary of lists of lists to keep track of the cars.
    # Hint: You may want to use a dictionary of lists of tuples to keep track of the cars.
    # Hint: You may want to use a dictionary of lists of sets to keep track of the cars.
    # Hint: You may want to use a dictionary of tuples of lists to keep track of the cars.
    # Hint: You may want to use a dictionary of tuples of tuples to keep track of the cars.
    # Hint: You may want to use a dictionary of tuples of sets to keep track of the cars.
    # Hint: You may want to use a dictionary of sets of lists to keep track of the cars.
    # Hint: You may want to use a dictionary of sets of tuples to keep track of the cars.
    # Hint: You may want to use a dictionary of sets of sets to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of lists to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of tuples to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of sets to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of dictionaries to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of lists of lists to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of lists of tuples to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of lists of sets to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of tuples of lists to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of tuples of tuples to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of tuples of sets to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of sets of lists to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of sets of tuples to keep track of the cars.
    # Hint: You may want to use a dictionary of dictionaries of sets of sets to keep track of the cars.
    # Hint: You may want to use a list of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of dictionaries to keep track of the cars.
    # Hint: You may want to use a list of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of lists of

    This function outputs the number of such collisions.
    """
