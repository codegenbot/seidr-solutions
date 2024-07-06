```python
def solution(lst):
    return sum(i for i in lst[1::2] if int(i) > 1 and int(i) % 2 != 0)