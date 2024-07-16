```
user_input = None
while user_input is None:
    try:
        user_input = input("Enter numbers separated by space: ")
        lst = list(map(int, user_input.split()))
        if len(lst) < 2:
            raise ValueError("Enter more than one number")
        if not all(isinstance(num, int) for num in lst):
            raise ValueError("Non-integer value entered")
        break
    except ValueError as e:
        print(f"Invalid input: {e}")

total_sum = sum(i for i in lst[1::2] if i % 2 == 0)
print(total_sum)