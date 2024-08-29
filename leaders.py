```
def leaders(input):
    return [x for i, x in reversed(list(enumerate(input))) if all(x >= input[j] for j in range(i + 1, len(input)))]