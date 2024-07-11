def solution(user_input=None):
    try:
        lst = list(map(int, user_input.split()))
    except ValueError:
        return "Invalid input. Please enter integers only."
    
    if not lst:
        return 0
    return sum(1 for _ in lst[::2]) / len(lst)