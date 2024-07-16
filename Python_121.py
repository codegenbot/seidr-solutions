```
while True:
    try:
        user_input = input("Enter numbers separated by space: ")
        lst = list(map(int, user_input.split()))
        if not all(isinstance(num, int) for num in lst):
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")

even_sum = sum(i for i in lst[1::2] if i % 2 == 0)
print(even_sum or "No even numbers found")