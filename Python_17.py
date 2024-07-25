user_input = list(map(int, input().split()))
user_input.sort()
print(*user_input[:5])