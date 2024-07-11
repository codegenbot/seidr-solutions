```
def solution(lst):
    try:
        lst = list(map(int, lst))
    except ValueError:
        return "Invalid input. Please enter integers only."
    
    if not lst:
        return 0
    return sum(1 for _ in lst[::2]) / len(lst)

user_input = input().split()
print(solution(list(map(int, user_input))))