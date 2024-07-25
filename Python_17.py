try:
    user_input = list(map(int, input().strip().split()))
except ValueError:
    user_input = [1, 2, 3, 4, 5]  # default input
user_input = sorted(user_input)[:5]
print("Sorted integers:", user_input)