```
def basement(input):
    for i, v in enumerate(cumulative_sum(input)):
        if v < 0:
            return i + 1
    return -1

def cumulative_sum(input):
    total = 0
    result = []
    for v in input:
        total += v
        result.append(total)
    return result