Here is the solution:

```python
def solution(lst):
    odd_sum = sum(i for i in lst[1::2] if i % 2 != 0)
    even_count = len([i for i in lst[::2] if i % 2 == 0])
    return f"The sum of all odd numbers is {odd_sum}, and the count of all even numbers is {even_count}."