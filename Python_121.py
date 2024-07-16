```
def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 == 0)

while True:
    print("Please enter numbers separated by spaces: ")
    try:
        user_input = input()
        lst = list(map(int, user_input.split()))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")
print(solution(lst))