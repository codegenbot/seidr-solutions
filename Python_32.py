def find_zero(xs: list):
    if len(xs) % 2 != 0 or xs[0] == 0:
        return None
    a = max(xs, key=abs)
    for i in range(1, len(xs)):
        if xs[i] == a:
            return -i / xs[i]

# Read input from user
input_list = list(map(int, input().split()))

# Call the function with the input
result = find_zero(input_list)
print(result)