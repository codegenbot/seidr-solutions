```
def leaders(input):
    output = []
    max_seen = input[-1]
    for i in range(len(input) - 1, -1, -1):
        if input[i] >= max_seen:
            output.append(input[i])
            max_seen = input[i]
    return list(reversed(output))