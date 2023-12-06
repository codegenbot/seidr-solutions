```
def fruit_distribution(s, new_apples):
    num_apples = int(s.split(" ")[0])
    num_oranges = int(s.split(" ")[2])
    return num_apples + new_apples, num_oranges
```