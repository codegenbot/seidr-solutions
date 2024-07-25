user_input = list(map(int, input().split()))
user_input.sort(reverse=True)
print(*user_input[:5])