```
def eat(number, need, extra):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]
```

The issue with the code is that the variable `remaining` is not defined in the function `eat`. To fix this, you need to define `remaining` as a parameter of the function or as a global variable.

Here's an example of how you could modify the code to include `remaining` as a parameter:
```
def eat(number, need, extra, remaining):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]
```
Alternatively, you could define `remaining` as a global variable:
```
remaining = 100

def eat(number, need, extra):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]
```
In either case, the code should now work as expected.