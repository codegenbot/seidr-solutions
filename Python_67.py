```
def fruit_distribution(s):
    apple_count = int(s.split(" ")[0])
    orange_count = int(s.split(" ")[2])
    mango_count = apple_count + orange_count
    return mango_count

# Function call with one argument
fruit_distribution("1 apples and 100 oranges")
```