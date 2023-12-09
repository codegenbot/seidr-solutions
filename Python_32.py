```
def find_zero(xs):
    # Read user input from stdin
    x = int(sys.stdin.readline())
    
    # Perform calculations
    result = 0
    for i in range(len(xs)):
        if xs[i] == x:
            result += 1
    
    # Return result
    return result
```