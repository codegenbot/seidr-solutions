
def histogram(test):
    """Given a string representing a space separated lowercase letters, return a dictionary
    of the letter with the most repetition and containing the corresponding count.
    If several letters have the same occurrence, return all of them.
    
    Example:
    histogram('a b c') == {'a': 1, 'b': 1, 'c': 1}
    histogram('a b b a') == {'a': 2, 'b': 2}
    histogram('a b c a b') == {'a': 2, 'b': 2}
    histogram('b b b b a') == {'b': 4}
    histogram('') == {}

    # Complete the following code given the task description and function signature.
    # You are not allowed to use any built-in functions.
    # You are not allowed to use any modules.
    # You are not allowed to use any loops.
    # You are not allowed to use any conditionals.
    # You are not allowed to use any comprehensions.
    # You are not allowed to use any ternary operators.
    # You are not allowed to use any lambda expressions.
    # You are not allowed to use any list or dictionary methods.
    # You are not allowed to use any list or dictionary comprehensions.
    # You are not allowed to use any list or dictionary constructors.
    # You are not allowed to use any list or dictionary comprehension methods.
    # You are not allowed to use any list or dictionary comprehension constructors.
    # You are not allowed to use any list or dictionary comprehension comprehensions.
    # You are not allowed to use any list or dictionary comprehension ternary operators.
    # You are not allowed to use any list or dictionary comprehension lambda expressions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension ternary operators.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension lambda expressions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension ternary operators.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension lambda expressions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension ternary operators.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension lambda expressions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension ternary operators.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension lambda expressions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension ternary operators.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension lambda expressions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension ternary operators.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension lambda expressions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehensions.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension methods.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension constructors.
    # You are not allowed to use any list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or dictionary comprehension list or
    """
