```
def leaders(input):
    leaders = []
    max_right_now = input[-1]
    for i in range(len(input) - 1, -1, -1):
        if input[i] >= max_right_now:
            leaders.append(input[i])
            max_right_now = input[i]
    return list(reversed(leaders))