```
def fruit_distribution(s, n):
    # Extract the number of apples and oranges from the input string
    apples, oranges = map(int, s.split())
    
    # Calculate the number of mangoes using the total number of fruits and the number of apples and oranges
    mangoes = n - apples - oranges
    
    return mangoes
```