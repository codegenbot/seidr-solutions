def leaders(my_list):
    if len(my_list) == 0:
        return []
    else:
        current_leader = my_list[0]
        leader_list = [current_leader]
        for i in range(1, len(my_list)):
            if my_list[i] >= current_leader:
                leader_list.append(my_list[i])
                current_leader = my_list[i]
        return leader_list