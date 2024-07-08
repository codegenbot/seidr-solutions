def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    a = max(xs, key=abs)
    for i in range(1, len(xs)):
        if xs[i] == a:
            return -i / xs[0]


# Fix the input reading part
input_list = list(map(int, input().split()))

# Call the function with the input_list
result = find_zero(input_list)
print(result)