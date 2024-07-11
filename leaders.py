def leaders(input):
    max_right = max(input)
    return [i for i in reversed(input) if i >= max_right]

input = list(map(int, input().split()))
print(' '.join(map(str, leaders(input))))