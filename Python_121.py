def solution(lst):
    return sum(i for i in lst[1::2] if i % 2 == 0)

while True:
    try:
        user_input = input("Enter numbers separated by space: ")
        if not user_input:
            raise ValueError
        lst = list(map(int, filter(str.isdigit, user_input.split())))
        if not all(isinstance(num, int) for num in lst):
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")
print(solution(lst))