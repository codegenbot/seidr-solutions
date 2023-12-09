```
def eat(number, need, remaining):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]
```
The issue is that the `eat` function always returns `[total_eaten, 0]`, regardless of the input values. To fix this, you need to update the function to return the correct number of carrots left based on the input values.

Here's a possible solution:
```
def eat(number, need, remaining):
    total_eaten = number + need
    if total_eaten <= remaining:
        carrots_left = remaining - total_eaten
    else:
        carrots_left = 0
    return [total_eaten, carrots_left]
```