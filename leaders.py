```
def leaders(input):
    leaders = []
    max_right = input[-1]
    for num in reversed(input[:-1]):
        if num >= max_right:
            leaders.append(num)
            max_right = num
    return leaders[::-1]