
<<REPL>>
import re
def bowling(s):
    """
    :param s: string representing the individual bowls in a 10-frame round of 10 pin bowling
    :return: score of that round
    """
    return sum([int(x) for x in re.findall("\d+", s)])
<<REPL>>
