Here is the Python code to solve the problem:

```
def dice_game(n, m):
    total = n * m
    count = 0
    for i in range(1, n+1):
        for j in range(1, m+1):
            if i > j:
                count += 1
    return count / total