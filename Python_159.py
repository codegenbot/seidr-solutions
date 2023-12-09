```python
def eat(number, need, remaining):
    total_eaten = number + need
    carrots_left = remaining - need
    if carrots_left < 0:
        carrots_left = 0
    return [total_eaten, carrots_left]

# Example usage with arguments
result = eat(5, 3, 10)
print(result) # Output: [8, 2]
```