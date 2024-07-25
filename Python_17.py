user_input = list(map(int, input("Enter 10 integers separated by space: ").strip().split()))
user_input.sort()
print(*user_input[:5])