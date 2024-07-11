```Python
def solution(lst1, lst2):
    try:
        lst1 = list(map(int, lst1))
        lst2 = list(map(int, lst2))
    except ValueError:
        return "Invalid input. Please enter integers only."
    
    if not lst1 or not lst2:
        return 0
    return sum(a for a in lst1) + sum(b for b in lst2)

user_input = input().split()
print(solution(list(map(int, user_input[::2])), list(map(int, user_input[1::2]))))