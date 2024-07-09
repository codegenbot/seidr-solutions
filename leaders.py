def leaders(input_list):
    leaders = []
    max_seen_so_far = input_list[-1]
    for i in range(len(input_list) - 1, -1, -1):
        if input_list[i] >= max_seen_so_far:
            leaders.append(input_list[i])
            max_seen_so_far = input_list[i]
    return reversed(leaders)