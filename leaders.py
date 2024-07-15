def leaders(input):
    leader = input[-1]
    leaders = [leader]
    for num in input[:-1][::-1]:
        if num < leader:
            break
        leader = num
        leaders.append(num)
    return list(reversed(leaders))