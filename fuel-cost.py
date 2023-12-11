```
def fuel_cost(vector):
    result = 0
    for x in vector:
        if x >= 14:
            result += int((x / 3) - 2)
        else:
            result += 0
    return result
```