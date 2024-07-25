user_input = [int(input(f"Enter integer {i+1}: ")) for i in range(10)]
user_input.sort(reverse=True)
print(*user_input[:5])