

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
    # You may use any data structure you want.
    # You may use any number of lines.
    # You may use any number of helper functions.
    # You may use any number of helper classes.
    # You may use any number of helper methods.
    # You may use any number of helper variables.
    # You may use any number of helper constants.
    # You may use any number of imports.
    # You may use any number of comments.
    # You may use any number of blank lines.
    # You may use any number of spaces.
    # You may use any number of tabs.
    # You may use any number of newlines.
    # You may use any number of parentheses.
    # You may use any number of brackets.
    # You may use any number of braces.
    # You may use any number of semicolons.
    # You may use any number of colons.
    # You may use any number of commas.
    # You may use any number of periods.
    # You may use any number of exclamation marks.
    # You may use any number of question marks.
    # You may use any number of apostrophes.
    # You may use any number of quotation marks.
    # You may use any number of underscores.
    # You may use any number of hyphens.
    # You may use any number of plus signs.
    # You may use any number of equal signs.
    # You may use any number of asterisks.
    # You may use any number of ampersands.
    # You may use any number of carets.
    # You may use any number of dollar signs.
    # You may use any number of hash signs.
    # You may use any number of percent signs.
    # You may use any number of tildes.
    # You may use any number of vertical bars.
    # You may use any number of backslashes.
    # You may use any number of forward slashes.
    # You may use any number of angle brackets.
    # You may use any number of at signs.
    # You may use any number of backticks.
    # You may use any number of pipes.
    # You may use any number of semicolons.
    # You may use any number of colons.
    # You may use any number of commas.
    # You may use any number of periods.
    # You may use any number of exclamation marks.
    # You may use any number of question marks.
    # You may use any number of apostrophes.
    # You may use any number of quotation marks.
    # You may use any number of underscores.
    # You may use any number of hyphens.
    # You may use any number of plus signs.
    # You may use any number of equal signs.
    # You may use any number of asterisks.
    # You may use any number of ampersands.
    # You may use any number of carets.
    # You may use any number of dollar signs.
    # You may use any number of hash signs.
    # You may use any number of percent signs.
    # You may use any number of tildes.
    # You may use any number of vertical bars.
    # You may use any number of backslashes.
    # You may use any number of forward slashes.
    # You may use any number of angle brackets.
    # You may use any number of at signs.
    # You may use any number of backticks.
    # You may use any number of pipes.
    # You may use any number of semicolons.
    # You may use any number of colons.
    # You may use any number of commas.
    # You may use any number of periods.
    # You may use any number of exclamation marks.
    # You may use any number of question marks.
    # You may use any number of apostrophes.
    # You may use any number of quotation marks.
    # You may use any number of underscores.
    # You may use any number of hyphens.
    # You may use any number of plus signs.
    # You may use any number of equal signs.
    # You may use any number of asterisks.
    # You may use any number of ampersands.
    # You may use any number of carets.
    # You may use any number of dollar signs.
    # You may use any number of hash signs.
    # You may use any number of percent signs.
    # You may use any number of tildes.
    # You may use any number of vertical bars.
    # You may use any number of backslashes.
    # You may use any number of forward slashes.
    # You may use any number of angle brackets.
    # You may use any number of at signs.
    # You may use any number of backticks.
    # You may use any number of pipes.
    # You may use any number of semicolons.
    # You may use any number of colons.
    # You may use any number of commas.
    # You may use any number of periods.
    # You may use any number of exclamation marks.
    # You may use any number of question marks.
    # You may use any number of apostrophes.
    # You may use any number of quotation marks.
    # You may use any number of underscores.
    # You may use any number of hyphens.
    # You may use any number of plus signs.
    # You may use any number of equal signs.
    # You may use any number of asterisks.
    # You may use any number of ampersands.
    # You may use any number of carets.
    # You may use any number of dollar signs.
    # You may use any number of hash signs.
    # You may use any number of percent signs.
    # You may use any number of tildes.
    # You may use any number of vertical bars.
    # You may use any number of backslashes.
    # You may use any number of forward slashes.
    # You may use any number of angle brackets.
    # You may use any number of at signs.
    # You may use any number of backticks.
    # You may use any number of pipes.
    # You may use any number of semicolons.
    # You may use any number of colons.
    # You may use any number of commas.
    # You may use any number of periods.
    # You may use any number of exclamation marks.
    # You may use any number of question marks.
    # You may use any number of apostrophes.
    # You may use any number of quotation marks.
    # You may use any number of underscores.
    # You may use any number of hyphens.
    # You may use any number of plus signs.
    # You may use any number of equal signs.
    # You may use any number of asterisks.
    # You may use any number of ampersands.
    # You may use any number of carets.
    # You may use any number of dollar signs.
    # You may use any number of hash signs.
    # You may use any number of percent signs.
    # You may use any number of tildes.
    # You may use any number of vertical bars.
    # You may use any number of backslashes.
    # You may use any number of forward slashes.
    # You may use any number of angle brackets.
    # You may use any number of at signs.
    # You may use any number of backticks.
    # You may use any number of pipes.
    # You may use any number of semicolons.
    # You may use any number of colons.
    # You may use any number of commas.
    # You may use any number of periods.
    # You may use any number of exclamation marks.
    # You may use any number of question marks.
    # You may use any number of apostrophes.
    # You may use any number of quotation marks.

    This function outputs the number of such collisions.
    """
