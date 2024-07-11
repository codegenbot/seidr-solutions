```
def solution(x):
    if isinstance(x, str):
        try:
            lst = list(map(int, x.split()))
        except ValueError:
            return "Invalid input. Please enter integers only."
        
        if not lst:
            return 0
        return sum(1 for _ in lst[::2]) / len(lst)
    else:
        return "Invalid input. Please enter integers only as a space-separated string."