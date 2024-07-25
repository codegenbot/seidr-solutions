try:
    user_input = list(map(int, input().split()))
except ValueError:
    user_input = []
print(user_input)