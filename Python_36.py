```
from itertools import filterfalse

def fizz_buzz(n):
    return len(list(filterfalse(lambda x: x % 11 == 0 or x % 13 == 0, range(1, n+1))))
```
This code uses the `itertools.filterfalse` function to create an iterator that filters out the numbers from the sequence that are not divisible by either 11 or 13, and then returns the length of the resulting sequence. This approach is more efficient than using a `for` loop to iterate over the entire range of numbers, especially for large input values.