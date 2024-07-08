```
def leaders(input):
    return [i for i in reversed(range(len(input))) if all(input[j] <= input[i] for j in range(i+1, len(input)))]