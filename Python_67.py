[PYTHON]
import re

def fruit_distribution(s, n):
    apples = int(re.search(r'\d+', s).group())
    oranges = int(re.search(r'\d+', s).group())
    return n - apples - oranges
[/PYTHON]
