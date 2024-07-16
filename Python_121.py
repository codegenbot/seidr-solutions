```Python
def solution(lst):
    odd_sum = sum(i for i in lst[::2] if i % 2 != 0)
    even_sum = sum(i for i in lst[1::2] if i % 2 == 0)
    return odd_sum, even_sum

while True:
    try:
        user_input = input("Enter numbers separated by space: ")
        lst = list(map(int, filter(str.isdigit, user_input.split())))
        if not all(isinstance(num, int) for num in lst):
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")

odd_sum, even_sum = solution(lst)
print(f"Sum of odd numbers: {odd_sum}")
print(f"Sum of even numbers: {even_sum}")