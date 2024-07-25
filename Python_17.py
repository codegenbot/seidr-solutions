user_input = [int(input()) for _ in range(10)]
user_input.sort(reverse=True)
print(*user_input[:5])