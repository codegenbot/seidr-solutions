user_input = list(map(int, input().split()))
if len(user_input) < 5:
    print("Input should contain at least 5 integers.")
else:
    user_input.sort(reverse=True)
    print(*user_input[:5])