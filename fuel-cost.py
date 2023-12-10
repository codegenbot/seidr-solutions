```python
def fuel_cost(nums):
    return sum(num//3 - 2 for num in nums)
```

This code performs integer division by using double slashes (`//`) instead of a single slash (`/`). 

This should give the correct result of 15077 for the input 6 8099 9261 5610 8573 6246 7484.