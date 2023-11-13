

def car_race_collision(n: int):
    """
    Imagine a road that's a perfectly straight infinitely long line.
    n cars are driving left to right;  simultaneously, a different set of n cars
    are driving right to left.   The two sets of cars start out being very far from
    each other.  All cars move in the same speed.  Two cars are said to collide
    when a car that's moving left to right hits a car that's moving right to left.
    However, the cars are infinitely sturdy and strong; as a result, they continue moving
    in their trajectory as if they did not collide.
    # TODO: complete the following code
    # Hint: you can use a list to represent the positions of the cars
    #       and you can use a list to represent the speeds of the cars
    #       (e.g. a positive speed means moving left to right,
    #       and a negative speed means moving right to left)
    # Hint: you can use the built-in function sorted() to sort a list
    # Hint: you can use the built-in function zip() to pair up two lists
    # Hint: you can use the built-in function enumerate() to get the index of an element
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function max() to get the maximum value
    # Hint: you can use the built-in function min() to get the minimum value
    # Hint: you can use the built-in function range() to generate a list of numbers
    # Hint: you can use the built-in function len() to get the length of a list
    # Hint: you can use the built-in function sum() to get the sum of a list
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function all() to check if all elements in a list are True
    # Hint: you can use the built-in function any() to check if any elements in a list are True
    # Hint: you can use the built-in function reversed() to reverse a list
    # Hint: you can use the built-in function sorted() to sort a list
    # Hint: you can use the built-in function zip() to pair up two lists
    # Hint: you can use the built-in function enumerate() to get the index of an element
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function max() to get the maximum value
    # Hint: you can use the built-in function min() to get the minimum value
    # Hint: you can use the built-in function range() to generate a list of numbers
    # Hint: you can use the built-in function len() to get the length of a list
    # Hint: you can use the built-in function sum() to get the sum of a list
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function all() to check if all elements in a list are True
    # Hint: you can use the built-in function any() to check if any elements in a list are True
    # Hint: you can use the built-in function reversed() to reverse a list
    # Hint: you can use the built-in function sorted() to sort a list
    # Hint: you can use the built-in function zip() to pair up two lists
    # Hint: you can use the built-in function enumerate() to get the index of an element
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function max() to get the maximum value
    # Hint: you can use the built-in function min() to get the minimum value
    # Hint: you can use the built-in function range() to generate a list of numbers
    # Hint: you can use the built-in function len() to get the length of a list
    # Hint: you can use the built-in function sum() to get the sum of a list
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function all() to check if all elements in a list are True
    # Hint: you can use the built-in function any() to check if any elements in a list are True
    # Hint: you can use the built-in function reversed() to reverse a list
    # Hint: you can use the built-in function sorted() to sort a list
    # Hint: you can use the built-in function zip() to pair up two lists
    # Hint: you can use the built-in function enumerate() to get the index of an element
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function max() to get the maximum value
    # Hint: you can use the built-in function min() to get the minimum value
    # Hint: you can use the built-in function range() to generate a list of numbers
    # Hint: you can use the built-in function len() to get the length of a list
    # Hint: you can use the built-in function sum() to get the sum of a list
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function all() to check if all elements in a list are True
    # Hint: you can use the built-in function any() to check if any elements in a list are True
    # Hint: you can use the built-in function reversed() to reverse a list
    # Hint: you can use the built-in function sorted() to sort a list
    # Hint: you can use the built-in function zip() to pair up two lists
    # Hint: you can use the built-in function enumerate() to get the index of an element
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function max() to get the maximum value
    # Hint: you can use the built-in function min() to get the minimum value
    # Hint: you can use the built-in function range() to generate a list of numbers
    # Hint: you can use the built-in function len() to get the length of a list
    # Hint: you can use the built-in function sum() to get the sum of a list
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function all() to check if all elements in a list are True
    # Hint: you can use the built-in function any() to check if any elements in a list are True
    # Hint: you can use the built-in function reversed() to reverse a list
    # Hint: you can use the built-in function sorted() to sort a list
    # Hint: you can use the built-in function zip() to pair up two lists
    # Hint: you can use the built-in function enumerate() to get the index of an element
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function max() to get the maximum value
    # Hint: you can use the built-in function min() to get the minimum value
    # Hint: you can use the built-in function range() to generate a list of numbers
    # Hint: you can use the built-in function len() to get the length of a list
    # Hint: you can use the built-in function sum() to get the sum of a list
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function all() to check if all elements in a list are True
    # Hint: you can use the built-in function any() to check if any elements in a list are True
    # Hint: you can use the built-in function reversed() to reverse a list
    # Hint: you can use the built-in function sorted() to sort a list
    # Hint: you can use the built-in function zip() to pair up two lists
    # Hint: you can use the built-in function enumerate() to get the index of an element
    # Hint: you can use the built-in function abs() to get the absolute value
    # Hint: you can use the built-in function max() to get the maximum value
    # Hint: you can use the built-in function min() to get the minimum value
    # Hint: you can use the built-

    This function outputs the number of such collisions.
    """
