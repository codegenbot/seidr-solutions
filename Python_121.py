Here is the corrected and modified code to solve the task:

```python
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)