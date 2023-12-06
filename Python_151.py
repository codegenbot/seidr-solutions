```python
def double_the_difference(lst):
    result = 0
    for num in lst:
        if num % 2 != 0 and num > 0:
            result += num ** 2
    return result

# Define the list of numbers to be processed
lst = [1, 3, 5, 7, 9]

# Call the function with the defined list
result = double_the_difference(lst)

print(result)  # Output: 20
```