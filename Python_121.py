```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 == 1)

while True:
    try:
        lst = list(map(int, input("Enter numbers separated by space: ").split()))
        break
    except ValueError:
        print("Invalid input. Please enter valid numbers.")

print(solution(lst))