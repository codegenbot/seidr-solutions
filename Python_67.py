```
def fruit_distribution(s):
    num_apples = int(s.split(" ")[0])
    num_oranges = int(s.split(" ")[2])
    return num_apples, num_oranges

assert fruit_distribution("1 apples and 100 oranges") == 19
```