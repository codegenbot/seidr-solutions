

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
    # You may not use any built-in Python libraries.
    # You may not use any external libraries.
    # You may not use any mutable data structures.
    # You may not use any sorting algorithms.
    # You may not use any recursion.
    # You may not use any loops.
    # You may not use any conditional statements.
    # You may not use any try/except statements.
    # You may not use any raise statements.
    # You may not use any return statements.
    # You may not use any print statements.
    # You may not use any input statements.
    # You may not use any global variables.
    # You may not use any nonlocal variables.
    # You may not use any nested functions.
    # You may not use any lambda expressions.
    # You may not use any generators.
    # You may not use any yield statements.
    # You may not use any ternary operators.
    # You may not use any bitwise operators.
    # You may not use any augmented assignment operators.
    # You may not use any comparison operators.
    # You may not use any arithmetic operators.
    # You may not use any logical operators.
    # You may not use any membership operators.
    # You may not use any identity operators.
    # You may not use any indexing or slicing.
    # You may not use any built-in functions.
    # You may not use any built-in methods.
    # You may not use any built-in attributes.
    # You may not use any built-in properties.
    # You may not use any built-in classes.
    # You may not use any built-in exceptions.
    # You may not use any built-in types.
    # You may not use any built-in constants.
    # You may not use any built-in enumerations.
    # You may not use any built-in collections.
    # You may not use any built-in modules.
    # You may not use any built-in packages.
    # You may not use any built-in namespaces.
    # You may not use any built-in objects.
    # You may not use any built-in functions.
    # You may not use any built-in methods.
    # You may not use any built-in attributes.
    # You may not use any built-in properties.
    # You may not use any built-in classes.
    # You may not use any built-in exceptions.
    # You may not use any built-in types.
    # You may not use any built-in constants.
    # You may not use any built-in enumerations.
    # You may not use any built-in collections.
    # You may not use any built-in modules.
    # You may not use any built-in packages.
    # You may not use any built-in namespaces.
    # You may not use any built-in objects.
    # You may not use any built-in functions.
    # You may not use any built-in methods.
    # You may not use any built-in attributes.
    # You may not use any built-in properties.
    # You may not use any built-in classes.
    # You may not use any built-in exceptions.
    # You may not use any built-in types.
    # You may not use any built-in constants.
    # You may not use any built-in enumerations.
    # You may not use any built-in collections.
    # You may not use any built-in modules.
    # You may not use any built-in packages.
    # You may not use any built-in namespaces.
    # You may not use any built-in objects.
    # You may not use any built-in functions.
    # You may not use any built-in methods.
    # You may not use any built-in attributes.
    # You may not use any built-in properties.
    # You may not use any built-in classes.
    # You may not use any built-in exceptions.
    # You may not use any built-in types.
    # You may not use any built-in constants.
    # You may not use any built-in enumerations.
    # You may not use any built-in collections.
    # You may not use any built-in modules.
    # You may not use any built-in packages.
    # You may not use any built-in namespaces.
    # You may not use any built-in objects.
    # You may not use any built-in functions.
    # You may not use any built-in methods.
    # You may not use any built-in attributes.
    # You may not use any built-in properties.
    # You may not use any built-in classes.
    # You may not use any built-in exceptions.
    # You may not use any built-in types.
    # You may not use any built-in constants.
    # You may not use any built-in enumerations.
    # You may not use any built-in collections.
    # You may not use any built-in modules.
    # You may not use any built-in packages.
    # You may not use any built-in namespaces.
    # You may not use any built-in objects.
    # You may not use any built-in functions.
    # You may not use any built-in methods.
    # You may not use any built-in attributes.
    # You may not use any built-in properties.
    # You may not use any built-in classes.
    # You may not use any built-in exceptions.
    # You may not use any built-in types.
    # You may not use any built-in constants.
    # You may not use any built-in enumerations.
    # You may not use any built-in collections.
    # You may not use any built-in modules.
    # You may not use any built-in packages.
    # You may not use any built-in namespaces.
    # You may not use any built-in objects.
    # You may not use any built-in functions.
    # You may not use any built-in methods.
    # You may not use any built-in attributes.
    # You may not use any built-in properties.
    # You may not use any built-in classes.
    # You may not use any built-in exceptions.
    # You may not use any built-in types.
    # You may not use any built-in constants.
    # You may not use any built-in enumerations.
    # You may not use any built-in collections.
    # You may not use any built-in modules.
    # You may not use any built-in packages.
    # You may not use any built-in namespaces.
    # You may not use any built-in objects.
    # You may not use any built-in functions.
    # You may not use any built-in methods.
    # You may not use any built-in attributes.
    # You may not use any built-in properties.
    # You may not use any built-in classes.
    # You may not use any built-in exceptions.
    # You may not use any built-in types.
    # You may not use any built-in constants.
    # You may not use any built-in enumerations.
    # You may not use any built-in collections.
    # You may not use any built-in modules.
    # You may not use any built-in packages.
    # You may not use any built-in namespaces.
    # You may not use any built-in objects.
    # You may not use any built-in functions.
    # You may not use any built-in methods.
    # You may not use any built-in attributes.
    # You may not use any built-in properties.
    # You may not use any built-in classes.
    # You may not use any built-in exceptions.
    # You

    This function outputs the number of such collisions.
    """
