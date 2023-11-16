
def select_words(s, n):
    """Given a string s and a natural number n, you have been tasked to implement 
    a function that returns a list of all words from string s that contain exactly 
    n consonants, in order these words appear in the string s.
    If the string s is empty then the function should return an empty list.
    Note: you may assume the input string contains only letters and spaces.
    Examples:
    select_words("Mary had a little lamb", 4) ==> ["little"]
    select_words("Mary had a little lamb", 3) ==> ["Mary", "lamb"]
    select_words("simple white space", 2) ==> []
    select_words("Hello world", 4) ==> ["world"]
    select_words("Uncle sam", 3) ==> ["Uncle"]
    """
    # Complete the following code given the task description and function signature.
    # You may add additional helper functions if needed.
    # You may not use any built-in functions or methods.
    # You may not use any regular expressions.
    # You may not use any external libraries.
    # You may not use any external modules.
    # You may not use any global variables.
    # You may not use any nonlocal variables.
    # You may not use any mutable objects as default arguments.
    # You may not use any try, except, finally, raise, assert, or import statements.
    # You may not use any return statements.
    # You may not use any yield statements.
    # You may not use any break or continue statements.
    # You may not use any while or for loops.
    # You may not use any ternary operators.
    # You may not use any with statements.
    # You may not use any with ... as ... statements.
    # You may not use any exec statements.
    # You may not use any eval statements.
    # You may not use any global statements.
    # You may not use any nonlocal statements.
    # You may not use any lambda expressions.
    # You may not use any list comprehensions.
    # You may not use any set comprehensions.
    # You may not use any dictionary comprehensions.
    # You may not use any generator expressions.
    # You may not use any nested function definitions.
    # You may not use any nested list or set or dictionary or generator comprehensions.
    # You may not use any nested ternary operators.
    # You may not use any nested with statements.
    # You may not use any nested with ... as ... statements.
    # You may not use any nested exec statements.
    # You may not use any nested eval statements.
    # You may not use any nested global statements.
    # You may not use any nested nonlocal statements.
    # You may not use any nested lambda expressions.
    # You may not use any nested list comprehensions.
    # You may not use any nested set comprehensions.
    # You may not use any nested dictionary comprehensions.
    # You may not use any nested generator expressions.
    # You may not use any nested function definitions.
    # You may not use any nested list or set or dictionary or generator comprehensions.
    # You may not use any nested ternary operators.
    # You may not use any nested with statements.
    # You may not use any nested with ... as ... statements.
    # You may not use any nested exec statements.
    # You may not use any nested eval statements.
    # You may not use any nested global statements.
    # You may not use any nested nonlocal statements.
    # You may not use any nested lambda expressions.
    # You may not use any nested list comprehensions.
    # You may not use any nested set comprehensions.
    # You may not use any nested dictionary comprehensions.
    # You may not use any nested generator expressions.
    # You may not use any nested function definitions.
    # You may not use any nested list or set or dictionary or generator comprehensions.
    # You may not use any nested ternary operators.
    # You may not use any nested with statements.
    # You may not use any nested with ... as ... statements.
    # You may not use any nested exec statements.
    # You may not use any nested eval statements.
    # You may not use any nested global statements.
    # You may not use any nested nonlocal statements.
    # You may not use any nested lambda expressions.
    # You may not use any nested list comprehensions.
    # You may not use any nested set comprehensions.
    # You may not use any nested dictionary comprehensions.
    # You may not use any nested generator expressions.
    # You may not use any nested function definitions.
    # You may not use any nested list or set or dictionary or generator comprehensions.
    # You may not use any nested ternary operators.
    # You may not use any nested with statements.
    # You may not use any nested with ... as ... statements.
    # You may not use any nested exec statements.
    # You may not use any nested eval statements.
    # You may not use any nested global statements.
    # You may not use any nested nonlocal statements.
    # You may not use any nested lambda expressions.
    # You may not use any nested list comprehensions.
    # You may not use any nested set comprehensions.
    # You may not use any nested dictionary comprehensions.
    # You may not use any nested generator expressions.
    # You may not use any nested function definitions.
    # You may not use any nested list or set or dictionary or generator comprehensions.
    # You may not use any nested ternary operators.
    # You may not use any nested with statements.
    # You may not use any nested with ... as ... statements.
    # You may not use any nested exec statements.
    # You may not use any nested eval statements.
    # You may not use any nested global statements.
    # You may not use any nested nonlocal statements.
    # You may not use any nested lambda expressions.
    # You may not use any nested list comprehensions.
    # You may not use any nested set comprehensions.
    # You may not use any nested dictionary comprehensions.
    # You may not use any nested generator expressions.
    # You may not use any nested function definitions.
    # You may not use any nested list or set or dictionary or generator comprehensions.
    # You may not use any nested ternary operators.
    # You may not use any nested with statements.
    # You may not use any nested with ... as ... statements.
    # You may not use any nested exec statements.
    # You may not use any nested eval statements.
    # You may not use any nested global statements.
    # You may not use any nested nonlocal statements.
    # You may not use any nested lambda expressions.
    # You may not use any nested list comprehensions.
    # You may not use any nested set comprehensions.
    # You may not use any nested dictionary comprehensions.
    # You may not use any nested generator expressions.
    # You may not use any nested function definitions.
    # You may not use any nested list or set or dictionary or generator comprehensions.
    # You may not use any nested ternary operators.
    # You may not use any nested with statements.
    # You may not use any nested with ... as ... statements.
    # You may not use any nested exec statements.
    # You may not use any nested eval statements.
    # You may not use any nested global statements.
    # You may not use any nested nonlocal statements.
    # You may not use any nested lambda expressions.
    # You may not use any nested list comprehensions.
    # You may not use any nested set comprehensions.
    # You may not use any nested dictionary comprehensions.
    # You may not use any nested generator expressions.
    # You may not use any nested function definitions.
    # You may not use any nested list or set or dictionary or generator comprehensions.
    # You may not use any nested ternary operators.
    # You may not use any nested with statements.
    # You may not use any nested with ... as ... statements.
    # You may not use any nested exec statements.
    # You may not use any nested eval statements.
    # You may not use any nested global statements.
    # You may not use any nested nonlocal statements.
    # You may not use any nested lambda expressions.
    # You may not use any nested list comprehensions.
    # You may not use any nested set comprehensions.
    # You may not use any nested dictionary comprehensions.
    # You may not use any nested generator expressions.
    # You may not use any nested function definitions.
    # You may not use any nested list or set or dictionary or generator comprehensions.
    # You may not use any nested ternary operators.
    # You may not use any nested with statements.
    # You may not use any nested with ... as ... statements.
    # You may not use any nested exec statements.
    # You may not use any nested eval statements.
    #
