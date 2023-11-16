

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
    # You may add additional helper functions.
    # You may not use any built-in Python data structures.
    # You may not use any built-in Python functions.
    # You may not use any Python libraries.
    # You may not use any external libraries.
    # You may not use any global variables.
    # You may not use any mutable variables.
    # You may not use any recursion.
    # You may not use any loops.
    # You may not use any sorting.
    # You may not use any string manipulation.
    # You may not use any regular expressions.
    # You may not use any exceptions.
    # You may not use any try/except/finally/raise/assert.
    # You may not use any other control flow statements.
    # You may not use any other conditional statements.
    # You may not use any other assignment statements.
    # You may not use any other function calls.
    # You may not use any other arithmetic operators.
    # You may not use any other comparison operators.
    # You may not use any other logical operators.
    # You may not use any other bitwise operators.
    # You may not use any other operators.
    # You may not use any other built-in Python statements.
    # You may not use any other built-in Python functions.
    # You may not use any other Python libraries.
    # You may not use any other external libraries.
    # You may not use any other Python constructs.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.
    # You may not use any other programming languages.
    # You may not use any other programming constructs.


    This function outputs the number of such collisions.
    """
