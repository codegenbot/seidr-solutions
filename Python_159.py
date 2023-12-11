```python
def eat(number, need, extra, remaining):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]

# Call the function with the correct arguments
print(eat(4, 5, 1, 20))
```