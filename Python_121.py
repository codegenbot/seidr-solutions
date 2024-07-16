def solution(lst):
    return sum(i for i in lst if type(i) == int and i % 2 != 0)

while True:
    try:
        user_input = input("Enter numbers separated by space: ")
        lst = list(map(int, user_input.split()))
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")
print(solution(lst))