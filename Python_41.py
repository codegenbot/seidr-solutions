

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
    # You may not use any data structures other than lists and dictionaries.
    # You may not use any loops.
    # You may not use recursion.
    # You may not use any mutable variables.
    # You may not use any variables other than those listed in the function signature.
    # You may not use any global variables.
    # You may not use any nonlocal variables.
    # You may not use any nested functions.
    # You may not use any classes.
    # You may not use any generators.
    # You may not use any list comprehensions.
    # You may not use any ternary operators.
    # You may not use any try/except/finally/else/elif/break/continue/pass statements.
    # You may not use any yield statements.
    # You may not use any lambda expressions.
    # You may not use any map/filter/reduce functions.
    # You may not use any zip/enumerate/reversed functions.
    # You may not use any sorted/min/max/sum/any/all/len functions.
    # You may not use any abs/pow/round/divmod functions.
    # You may not use any bin/hex/oct/int/float/complex/str/chr/ord/id functions.
    # You may not use any print/input/range/eval/exec/globals/locals functions.
    # You may not use any open/file/execfile/compile/reload functions.
    # You may not use any __import__/__file__/__name__/__package__/__doc__/__debug__ constants.
    # You may not use any sys/os/__future__ modules.
    # You may not use any itertools/functools/collections/operator/math/random/time modules.
    # You may not use any __builtins__/__doc__/__loader__/__spec__/__package__/__name__/__file__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__/__loader__/__spec__/__cached__/__builtins__/__file__/__package__/__name__

    This function outputs the number of such collisions.
    """
