```
def fruit_distribution(s):
    num_apples = int(re.search(r'\d+', s)[0])
    num_oranges = int(re.search(r'\d+', s)[1])
    return num_apples, num_oranges
```


