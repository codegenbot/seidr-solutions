```
def solution():
    try:
        lst = list(map(int, input().split()))
        
        if len(lst) < 3:
            return "Invalid input. Please provide at least three numbers."
        
        if not all(isinstance(num, int) for num in lst[:2]):
            return "First two numbers must be integers."
        
        return sum(1 for _ in lst[::2]) / len(lst)
    except ValueError:
        return "Invalid input. Please enter three integers separated by spaces."