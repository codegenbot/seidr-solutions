
```
def fruit_distribution(s):
    # Extract the numbers of apples and oranges from the input string
    apple_count = int(s.split(" ")[0])
    orange_count = int(s.split(" ")[2])

    # Calculate the number of mango fruits
    mango_count = apple_count + orange_count

    return mango_count
```
