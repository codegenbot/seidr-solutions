user_input = list(map(int, input("Enter space-separated numbers: ").split()))
user_input.sort(reverse=True)
print(*user_input[:5])