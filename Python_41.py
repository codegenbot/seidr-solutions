

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

    # Hint: You may want to use the following data structures:
    #       - a list of tuples, where each tuple represents a car
    #       - a dictionary, where the key is the position of a car and the value is a list of cars at that position

    # Hint: You may want to use the following functions:
    #       - sorted()
    #       - enumerate()
    #       - zip()
    #       - dict.get()
    #       - dict.setdefault()

    # Hint: You may want to use the following operators:
    #       - <
    #       - ==
    #       - +=

    # Hint: You may want to use the following constants:
    #       - None
    #       - True
    #       - False

    # Hint: You may want to use the following variables:
    #       - n

    # Hint: You may want to use the following loops:
    #       - for

    # Hint: You may want to use the following if statements:
    #       - if

    # Hint: You may want to use the following return statements:
    #       - return

    # Hint: You may want to use the following print statements:
    #       - print

    # Hint: You may want to use the following comments:
    #       - #

    # Hint: You may want to use the following blank lines:
    #       -

    # Hint: You may want to use the following indentations:
    #       -

    # Hint: You may want to use the following line breaks:
    #       - \n

    # Hint: You may want to use the following spaces:
    #       -

    # Hint: You may want to use the following tabs:
    #       - \t

    # Hint: You may want to use the following semicolons:
    #       - ;

    # Hint: You may want to use the following colons:
    #       - :

    # Hint: You may want to use the following commas:
    #       - ,

    # Hint: You may want to use the following periods:
    #       - .

    # Hint: You may want to use the following parentheses:
    #       - (
    #       - )

    # Hint: You may want to use the following brackets:
    #       - [
    #       - ]

    # Hint: You may want to use the following braces:
    #       - {
    #       - }

    # Hint: You may want to use the following apostrophes:
    #       - '

    # Hint: You may want to use the following quotation marks:
    #       - "

    # Hint: You may want to use the following underscores:
    #       - _

    # Hint: You may want to use the following hyphens:
    #       - -

    # Hint: You may want to use the following plus signs:
    #       - +

    # Hint: You may want to use the following equals signs:
    #       - =

    # Hint: You may want to use the following asterisks:
    #       - *

    # Hint: You may want to use the following slashes:
    #       - /

    # Hint: You may want to use the following backslashes:
    #       - \

    # Hint: You may want to use the following ampersands:
    #       - &

    # Hint: You may want to use the following percent signs:
    #       - %

    # Hint: You may want to use the following dollar signs:
    #       - $

    # Hint: You may want to use the following pound signs:
    #       - #

    # Hint: You may want to use the following at signs:
    #       - @

    # Hint: You may want to use the following exclamation points:
    #       - !

    # Hint: You may want to use the following question marks:
    #       - ?

    # Hint: You may want to use the following tildes:
    #       - ~

    # Hint: You may want to use the following backticks:
    #       - `

    # Hint: You may want to use the following vertical bars:
    #       - |

    # Hint: You may want to use the following carets:
    #       - ^

    # Hint: You may want to use the following angle brackets:
    #       - <
    #       - >

    # Hint: You may want to use the following semicolons:
    #       - ;

    # Hint: You may want to use the following colons:
    #       - :

    # Hint: You may want to use the following commas:
    #       - ,

    # Hint: You may want to use the following periods:
    #       - .

    # Hint: You may want to use the following parentheses:
    #       - (
    #       - )

    # Hint: You may want to use the following brackets:
    #       - [
    #       - ]

    # Hint: You may want to use the following braces:
    #       - {
    #       - }

    # Hint: You may want to use the following apostrophes:
    #       - '

    # Hint: You may want to use the following quotation marks:
    #       - "

    # Hint: You may want to use the following underscores:
    #       - _

    # Hint: You may want to use the following hyphens:
    #       - -

    # Hint: You may want to use the following plus signs:
    #       - +

    # Hint: You may want to use the following equals signs:
    #       - =

    # Hint: You may want to use the following asterisks:
    #       - *

    # Hint: You may want to use the following slashes:
    #       - /

    # Hint: You may want to use the following backslashes:
    #       - \

    # Hint: You may want to use the following ampersands:
    #       - &

    # Hint: You may want to use the following percent signs:
    #       - %

    # Hint: You may want to use the following dollar signs:
    #       - $

    # Hint: You may want to use the following pound signs:
    #       - #

    # Hint: You may want to use the following at signs:
    #       - @

    # Hint: You may want to use the following exclamation points:
    #       - !

    # Hint: You may want to use the following question marks:
    #       - ?

    # Hint: You may want to use the following tildes:
    #       - ~

    # Hint: You may want to use the following backticks:
    #       - `

    # Hint: You may want to use the following vertical bars:
    #       - |

    # Hint: You may want to use the following carets:
    #       - ^

    # Hint: You may want to use the following angle brackets:
    #       - <
    #       - >

    This function outputs the number of such collisions.
    """
