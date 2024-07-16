```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 == 1)

user_input = input("Enter numbers separated by space: ")
lst = list(map(int, user_input.split()))
print(solution(lst))