def solve():
    user_input = list(map(int, input("Enter your integers separated by spaces: ").split()))
    return sum((x//3) - 2 for x in user_input)