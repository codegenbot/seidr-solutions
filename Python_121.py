if user_input:
    total_sum = sum(i for i in lst[1::2] if i % 2 == 0)
    odd_numbers = [i for i in lst[::2] if i % 2 != 0]
    print(f"Sum of even numbers: {total_sum}")
    print(f"Odd numbers: {', '.join(map(str, odd_numbers))}")
else:
    print("No input provided.")