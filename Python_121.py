```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 != 0)

user_input = list(map(int, input("Enter space-separated integers: ").split()))
result = solution(user_input)
print("The result is:", result)