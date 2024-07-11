```Python
def solution(lst):
    try:
        lst = list(map(int, lst.split()))
    except ValueError:
        return "Invalid input. Please enter integers only."
    
    if not lst:
        return 0
    return sum(1 for _ in lst[::2]) / len(lst)

user_input = input()
if user_input.isdigit():
    print(solution(user_input))
else:
    try:
        lst = list(map(int, user_input.split()))
        print(solution(lst))
    except ValueError:
        print("Invalid input. Please enter integers only.")