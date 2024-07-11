````
"""
Check if the sum of squares of odd numbers in the list is more than half of the total sum of squares.
If it's true, then double the difference between these two sums. If not, calculate and return the absolute difference.
"""

def check():
    lst = [int(i) for i in input("Enter elements separated by space: ").split()]
    print(double_the_difference(lst))

def double_the_difference(lst):
    if not lst:  
        return 0  
    
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    
    if len(lst) == 0:  
        return 0
    elif sum(1 for i in lst) % 2 == 1:  
        return odd_sum * 2
    else:
        return abs(odd_sum - (sum(i**2 for i in lst) / len(lst)))
```