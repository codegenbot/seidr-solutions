

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
    # You may add additional helper functions as needed.
    # You may not use any built-in Python functions.
    # You may not use any external libraries.
    # You may not use any data structures other than lists.
    # You may not use any loops.
    # You may not use any recursion.
    # You may not use any mutable variables.
    # You may not use any variables other than the ones given in the function signature.
    # You may not use any global variables.
    # You may not use any nested functions.
    # You may not use any ternary operators.
    # You may not use any bitwise operators.
    # You may not use any string operations.
    # You may not use any list comprehensions.
    # You may not use any generators.
    # You may not use any map, filter, or reduce functions.
    # You may not use any lambda functions.
    # You may not use any yield statements.
    # You may not use any try/except/finally/else/elif/break/continue/pass statements.
    # You may not use any assignments.
    # You may not use any augmented assignments.
    # You may not use any comparisons.
    # You may not use any logical operators.
    # You may not use any if statements.
    # You may not use any while statements.
    # You may not use any for statements.
    # You may not use any return statements.
    # You may not use any print statements.
    # You may not use any input statements.
    # You may not use any eval statements.
    # You may not use any exec statements.
    # You may not use any assert statements.
    # You may not use any import statements.
    # You may not use any global statements.
    # You may not use any nonlocal statements.
    # You may not use any del statements.
    # You may not use any with statements.
    # You may not use any raise statements.
    # You may not use any exec statements.
    # You may not use any eval statements.
    # You may not use any execfile statements.
    # You may not use any compile statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memoryview statements.
    # You may not use any memory

    This function outputs the number of such collisions.
    """
