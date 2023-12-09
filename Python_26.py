```
def remove_duplicates(numbers):
    unique_elements = set()
    result = []
    for num in numbers:
        if num not in unique_elements:
            unique_elements.add(num)
            result.append(num)
    return result
```

The issue is that there is an extra `]` at the end of the program, which is causing the SyntaxError. To fix this, simply remove the extra `]`. 