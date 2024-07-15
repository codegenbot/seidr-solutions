def leaders(input):
    max_seen_so_far = input[-1]
    leaders = []
    for i in range(len(input) - 1, -1, -1):
        if input[i] >= max_seen_so_far:
            leaders.append(input[i])
            max_seen_so_far = input[i]
    return list(reversed(leaders))