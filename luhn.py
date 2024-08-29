Here is the Python function that implements Luhn's algorithm:

```
def luhn(vector):
    total = 0
    for i in range(len(vector)):
        if i % 2 == 1:
            num = int(vector[i]) * 2
            if num > 9:
                num -= 9
        else:
            num = int(vector[i])
        total += num
    return total