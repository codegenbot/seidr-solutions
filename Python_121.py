```python
def solution(lst):
    return sum(i for i in lst if i % 2 != 0 and (index := len(i for j in range(len(lst)) if j % 2 == 0) if any(j % 2 == 0 else None for j, i in enumerate(lst))) % 2 == 0)