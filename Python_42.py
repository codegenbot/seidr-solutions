def increment_list(l):
    return [x + 1 for x in l]

input_list = list(map(int, input().split()))

print(increment_list(input_list))