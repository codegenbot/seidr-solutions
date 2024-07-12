def solution(lst):
    return sum([i for i in lst if isinstance(i, str) and len(i) == len(str(int(i)))])

```