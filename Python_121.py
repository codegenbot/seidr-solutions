Here is the completed code:
```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)