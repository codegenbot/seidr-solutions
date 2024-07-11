```
def solution(lst):
    try:
        lst = list(map(int, lst))
    except ValueError:
        return "Invalid input. Please enter integers only."
    
    if len(lst) < 3:
        return "Invalid input. Please provide at least three numbers."
    if not all(isinstance(num, int) for num in lst[:2]):
        return "First two numbers must be integers."

    if not lst:
        return 0
    return sum(1 for _ in lst[::2]) / len(lst)

user_input = input().split()
print(solution(list(map(int, user_input))))